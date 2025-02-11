// https://leetcode.com/problems/number-of-1-bits/
class Solution {
public:
    int hammingWeight(int n) {
        int sum = 0;
        while(n){
            if (n & 1) sum++;
            n >>= 1;
        }
        return sum;
    }
};
