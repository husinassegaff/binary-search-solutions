class Solution {
    solve(n) {
        var fizzbuzz = [];
        var temp = "";
        for (var i = 1; i <= n; i++) {
            // check if the number is divisible by 3 and 5
            if (i % 3 === 0 && i % 5 === 0) {
            // add the word fizzbuzz to the array
            fizzbuzz.push('FizzBuzz');
            } else if (i % 3 === 0) {
            // add the word fizz to the array
            fizzbuzz.push('Fizz');
            } else if (i % 5 === 0) {
            // add the word buzz to the array
            fizzbuzz.push('Buzz');
            } else {
            // add the number to the array
            temp = i.toString();
            fizzbuzz.push(temp);
            }
        }
        // return the array
        return fizzbuzz;
    }
}