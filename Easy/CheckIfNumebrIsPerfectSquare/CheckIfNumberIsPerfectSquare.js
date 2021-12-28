class Solution {
  solve(n) {
      var squareRoot = Math.sqrt(n);
      if (squareRoot % 1 === 0) {
          return true;
      } else {
          return false;
      }
  }
}