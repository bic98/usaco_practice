const input = require('fs').readFileSync('/dev/stdin').toString().split('\n');
const n = +input.shift();

const a = (n + 1) * n / 2;
const b = a * a;

console.log(a);
console.log(b);
console.log(b);
