// Link: https://leetcode.com/problems/fibonacci-number

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: fibonacci-number
 *  RUNTIME: 2 ms
 *  MEMORY: 6.2 MB
 *  DATE: 8-13-2023, 2:29:51 PM
 *
 */

// Solution:

class Solution {
public:
    int fib(int n) {
        if(n==0) return 0;
        if(n==1) return 1;
        vector<int> ans(n+1);
        ans[0]=0;
        ans[1]=1;
        for(int i=2; i<=n; i++) ans[i]=ans[i-1]+ans[i-2];
        return ans[n];
    }
};
