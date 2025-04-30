const fs = require('fs');
const input = fs.readFileSync(0, 'utf-8').trim().split('\n'); 

const n = +input.shift().map(Number); 
const arr = input.map(l => l.split(' ')); 

console.log(n); 
