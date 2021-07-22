vector<vector<int>> solve(vector<vector<int>>& matrix) {

    for (auto& i : matrix) {
        reverse(i.begin(), i.end());
        for (int j = 0; j < i.size(); j++) i[j] ^= 1;
    }

   return matrix;
}