// inputに入力データ全体が入る
function Main(input) {
  const arr = input.split(" ");
  const a = arr[0];
  const b = arr[1];

  const ans = (a * b) % 2 === 0 ? "Even" : "Odd";
  console.log(ans);
}

Main(require("fs").readFileSync("/dev/stdin", "utf8"));
Main(require("fs").readFileSync("/dev/stdin", "utf8"));
