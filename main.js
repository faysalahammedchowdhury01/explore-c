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
