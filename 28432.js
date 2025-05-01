const input = require('fs').readFileSync('/dev/stdin').toString().split('\n');
const n = +input[0];
const s = input.slice(1, n + 1);
const m = +input[n + 1];
const a = input.slice(n + 2);

const id = s.findIndex(i => i === '?');
const prev = id > 0 ? s[id - 1][s[id - 1].length - 1] : null;
const next = id < n - 1 ? s[id + 1][0] : null;


for (const i of a) {
	if (s.includes(i)) continue;
	const f = i[0];
	const b = i[i.length - 1];
	if (prev && prev !== f) continue;
	if (next && next !== b) continue;
	console.log(i);
	break;
}
