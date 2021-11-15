class Solution {
    solve(n) {
        var numStr = n.toString();
        var numArr = numStr.split('');

        for (var i = 0; i < numArr.length; i++) {
            if(numArr[i] !='3'){
                numArr[i] = '3';
                break;
            }
        }

        var numArrJoin = numArr.join('');
        var numStr = parseInt(numArrJoin);

        return numStr;
    }
}