// @ts-check
function Main(input) {
  input = input.split("\n");
  const count = input[0];
  const arr = input[1].split(" ").slice(0, count);
  console.log(countSplit(arr, 0));
}

const divAll = arr => {
  return arr.map(e => e / 2);
};

const isExistOdd = arr => {
  return arr.some(e => e % 2 !== 0);
};

const isNotAllZero = arr => {
  return arr.find(e => e !== 0);
};

const countSplit = (arr, count) => {
  if (isExistOdd(arr) || !isNotAllZero(arr)) {
    return count;
  }
  count = count += 1;
  return countSplit(divAll(arr), count);
};

Main(require("fs").readFileSync("/dev/stdin", "utf8"));
