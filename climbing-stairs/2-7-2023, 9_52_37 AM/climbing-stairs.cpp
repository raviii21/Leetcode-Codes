// Link: https://leetcode.com/problems/climbing-stairs

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: climbing-stairs
 *  RUNTIME: 3 ms
 *  MEMORY: 6 MB
 *  DATE: 2-7-2023, 9:52:37 AM
 *
 */

// Solution:

class Solution {
public:
    int climbStairs(int n) {
       int dp[n+2];
       dp[0]=0,dp[1]=1;
       if(n==1) return 1;
       for(int i=2; i<n; i++){
           dp[i]=dp[i-1]+dp[i-2];
       }
       dp[n]=dp[n-1]+dp[n-2];
       dp[n+1]=dp[n]+dp[n-1];
       return dp[n+1];
    }
};
