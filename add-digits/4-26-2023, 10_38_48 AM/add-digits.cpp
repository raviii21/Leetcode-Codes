// Link: https://leetcode.com/problems/add-digits

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: add-digits
 *  RUNTIME: 3 ms
 *  MEMORY: 6 MB
 *  DATE: 4-26-2023, 10:38:48 AM
 *
 */

// Solution:

class Solution {
public:
    int addDigits(int num) {
        if(!num) return 0;
        int ans;
        if(num%9==0)ans=9;
        else ans=num%9;
        return ans; 
    }
};
