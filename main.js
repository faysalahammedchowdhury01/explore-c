// let a, b, c;
// for (a = 1; a <= 3; a++) {
//   for (b = 1; b <= 3; b++) {
//     for (c = 1; c <= 3; c++) {
//       if (a != b && b != c && a != c) {
//         console.log(a, b, c);
//       }
//     }
//   }
// }

// let a, b, c;
// for (a = 1; a <= 3; a++) {
//   for (b = 1; b <= 3 && a != b; b++) {
//     for (c = 1; c <= 3 && b != c && a != c; c++) {
//       console.log(a, b, c);
//     }
//   }
// }

// let a, b, x;
// a = 25;
// b = 40;
// if (a < b) {
//   x = a;
// } else {
//   x = b;
// }
// let lcf;
// for (let i = 2; true; i++) {
//   if (a % lcf != 0 || b % lcf != 0) {
//     lcf = x / i;
//   } else {
//     break;
//   }
// }
// console.log(lcf);

// let a = 6;
// let b = 8;
// let x;
// let hcf;

// if (a == 0) {
//   hcf = b;
// } else if (b == 0) {
//   hcf = a;
// } else {
//   while (b != 0) {
//     x = b;
//     b = a % b;
//     a = x;
//   }
// }

// hcf = a;

// let arr = [1, 2, 3, 4, 5];
// let arr2 = [];

// let i;
// for (i = 0; i < 5; i++) {
//   arr2[4 - i] = arr[i];
// }

// for (let i = 0; i < 5; i++) {
//   arr[i] = arr2[i];
// }

// for (let i = 0; i < 5; i++) {
//   console.log(arr[i]);
// }

// let arr = [1, 2, 3, 4, 5, 6, 7, 8, 9];

// let i, j, temp;
// for (i = 0, j = arr.length - 1; i < arr.length / 2; i++, j--) {
//   temp = arr[i];
//   arr[i] = arr[j];
//   arr[j] = temp;
// }

// // arr.reverse();

// for (let i = 0; i < arr.length; i++) {
//   console.log(arr[i]);
// }

const totalMarks = [6, 6, 9, 7, 4, 6, 9, 7, 6, 2, 4, 3, 4, 1];

// const uniqueTotalMarks = totalMarks.filter(
//   (item, index) => totalMarks.indexOf(item) === index
// );

const uniqueTotalMarks = [];

const count = {};

for (let i = 0; i < totalMarks.length; i++) {
  const index = uniqueTotalMarks.indexOf(totalMarks[i]);
  const isExist = index === -1 ? false : true;
  if (isExist) {
    count['number' + uniqueTotalMarks[index]] =
      count['number' + uniqueTotalMarks[index]] + 1 || 2;
  }
  uniqueTotalMarks.push(totalMarks[i]);
}

console.log(count);
