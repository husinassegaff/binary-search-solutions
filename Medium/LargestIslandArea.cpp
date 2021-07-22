int DFS(vector<vector<int>>& matrix, int row, int col){

     if (row < 0 || col < 0 || row > matrix.size() - 1 || col > matrix[row].size() - 1 || matrix[row][col] == 0)
        return 0;
    
    matrix[row][col] = 0;

    return 1 + DFS(matrix, row - 1, col) + DFS(matrix, row, col + 1) + DFS(matrix, row + 1, col) + DFS(matrix, row, col - 1);
}

int solve(vector<vector<int>>& matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();

    int sum = 0;

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols;j++){
            if(matrix[i][j] == 1)
                sum = max(sum, DFS(matrix, i, j));
        }
    }

    return sum;
}