class Solution {
    solve(n) {
        var s = n.toString();
        var l = s.length;
        for (var i = 0; i < l / 2; i++) {
            if (s[i] != s[l - i - 1]) {
            return false;
            }
        }
        return true;
    }
}