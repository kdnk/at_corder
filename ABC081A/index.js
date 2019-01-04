// @ts-check
function Main(input) {
  const arr = input.split("");
  const count = arr.reduce((memo, el) => {
    if (el == 1) {
      memo = memo + 1;
    }
    return memo;
  }, 0);
  console.log(count);
}

Main(require("fs").readFileSync("/dev/stdin", "utf8"));
