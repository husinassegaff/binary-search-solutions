class Solution {
    solve(n) {
        if(n == 0) return "0";

        var base3 = [];
        var remainder = 0;
        while (n > 0) {
            remainder = n % 3;
            n = Math.floor(n / 3);
            base3.push(remainder);
        }
        return base3.reverse().join('');
    }
}