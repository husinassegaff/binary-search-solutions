class Solution {
    solve(matrix) {
        for (let i = 0; i < matrix.length; i++) {
            matrix[i].reverse();
            for (let j = 0; j < matrix[i].length; j++) {
                matrix[i][j] = matrix[i][j] == 0 ? 1 : 0;
            }
        }
        return matrix;
    }
}