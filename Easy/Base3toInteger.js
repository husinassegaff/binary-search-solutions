class Solution {
    solve(s) {
         var n = 0;
    for (var i = 0; i < s.length; i++) {
        n = n * 3 + parseInt(s[i]);
        }
    return n;
    }
}