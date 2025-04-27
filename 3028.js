const readline = require('readline');

const rl = readline.createInterface({
	input: process.stdin,
	output: process.stdout
});

const input = [];

rl.on('line', (line) => {
	input.push(line);
});

rl.on('close', () => {
	const n = Number(input[0]);
	const m = Number(input[1]);
	let ans = 0;

	for (let i = 0; i < m; i++) {
		const [w, l] = input[i + 2].split(' ').map(Number);
		ans += w * l;
	}

	const k = Math.ceil(ans / n);
	console.log(k);
});

