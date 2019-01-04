// @ts-check
function Main(input) {
  input = input.split("\n");
  const count = input[0];
  const arr = input[1].split("");
}

function divAll(arr) {
  return arr.map(e => e / 2);
}

Main(require("fs").readFileSync("/dev/stdin", "utf8"));
