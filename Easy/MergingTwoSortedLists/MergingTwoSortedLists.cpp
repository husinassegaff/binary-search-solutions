vector<int> solve(vector<int>& a, vector<int>& b) { 
    vector<int> c(a.size() + b.size());

    merge(a.begin(), a.end(), b.begin(), b.end(), c.begin());

    return c;
}