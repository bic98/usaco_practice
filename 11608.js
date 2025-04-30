const readline = require('readline');

const rl = readline.createInterface({
	input: process.stdin,
	output: process.stdout
});

const arr = Array(26).fill(0); 
const input = [];

rl.on('line', (line) => {
	input.push(line);
});


rl.on('close', () => {
	const s = input[0]; 
	const n = s.length; 
	let cnt = 0; 
	for(let i = 0; i < n; i++){
		const c = s.charCodeAt(i) - "a".charCodeAt(0); 
		if(arr[c] == 0){
			cnt++; 
		}
		arr[c]++; 
	}
	cnt = Math.max(cnt - 2, 0); 
	const vec = []; 
	for(let i = 0; i < 26; i++){
		if(arr[i] > 0) vec.push(arr[i]); 
	}
	vec.sort((a, b) => (a - b)); 
	let ans = 0; 
	for(let i = 0; i < cnt; i++){
		ans += vec[i]; 
	}
	console.log(ans); 
}); 
