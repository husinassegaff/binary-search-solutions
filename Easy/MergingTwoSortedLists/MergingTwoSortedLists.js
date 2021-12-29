class Solution {
    solve(a, b) {
        var sum = a.concat(b);
        sum.sort(function(a, b){return a - b});
        
        return sum;
    }
}