const input = require('fs').readFileSync('/dev/stdin').toString().split('\n');
const n = +input.shift();
const arr = input.map(line => line.split(' ').map(Number));

const ans = [];

for (let i = 0; i < n; i++) {
	const ret = [arr[0][i], arr[1][i], arr[2][i]];
	ret.sort((a, b) => a - b);
	ans.push(ret[1]);
}

console.log(ans.join(' ')); 
