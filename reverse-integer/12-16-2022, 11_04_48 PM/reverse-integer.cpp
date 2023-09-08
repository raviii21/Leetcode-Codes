// Link: https://leetcode.com/problems/reverse-integer

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: reverse-integer
 *  RUNTIME: 0 ms
 *  MEMORY: 6 MB
 *  DATE: 12-16-2022, 11:04:48 PM
 *
 */

// Solution:

class Solution {
public:
    int reverse(int x) {
        int sign;
        if(x<0) sign=-1;
        else sign=1;

        x=abs(x);
        int ans=0;
        while(x>0){
            if(INT_MAX / 10 < ans) return 0;
            ans=ans*10 + x%10;
            x/=10;
        }
        return sign*ans;
    }
};
