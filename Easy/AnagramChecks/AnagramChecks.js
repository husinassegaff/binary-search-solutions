class Solution {
    solve(s0, s1) {
          // sort the strings
    var sortedStr1 = s0.split('').sort().join('');
    var sortedStr2 = s1.split('').sort().join('');
    // compare the sorted strings
    if (sortedStr1 === sortedStr2) {
        return true;
    }
    return false;
    }
}