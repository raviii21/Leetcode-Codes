// Link: https://leetcode.com/problems/power-of-two

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: power-of-two
 *  RUNTIME: 3 ms
 *  MEMORY: 6 MB
 *  DATE: 7-23-2023, 4:14:18 PM
 *
 */

// Solution:

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0) return false;
        int x = __builtin_popcount(n);
        if(x==1) return true;

        return false;
    }
};
