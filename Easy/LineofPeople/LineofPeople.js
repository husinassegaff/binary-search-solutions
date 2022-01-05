class Solution {
    solve(n, a, b) {
        if(n - b >= a) {
            return b + 1;
        }
        else return n - a;
    }
}