// Link: https://leetcode.com/problems/coin-change-ii

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: coin-change-ii
 *  RUNTIME: 24 ms
 *  MEMORY: 236.6 MB
 *  DATE: 8-11-2023, 11:25:29 AM
 *
 */

// Solution:

class Solution {
public:
    int solution(int amount, vector<int>& coins,int i,vector<vector<int>>&dp){
        if(i<0 || amount<0) return 0;
        if(amount==0) return 1;
        if(dp[i][amount]!=-1) return dp[i][amount];

        return dp[i][amount]=solution(amount-coins[i],coins,i,dp)+solution(amount,coins,i-1,dp);
    }
    int change(int amount, vector<int>& coins) {
        int n = coins.size();
        vector<vector<int>>dp(301,vector<int>(5001,-1));
        return solution(amount,coins,n-1,dp);
    }
};
