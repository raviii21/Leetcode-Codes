// Link: https://leetcode.com/problems/solving-questions-with-brainpower

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: solving-questions-with-brainpower
 *  RUNTIME: 401 ms
 *  MEMORY: 115.3 MB
 *  DATE: 5-12-2023, 10:46:32 PM
 *
 */

// Solution:

class Solution {
public:
    long long mostPoints(vector<vector<int>>& a) {
        int n = a.size();
        vector<long long> dp(n,0);
        dp[n-1] = a[n-1][0];
        for(int i = n-2;i >= 0;i--){
            if(a[i][1] + i + 1 < n)
            dp[i] = max(dp[i+1],dp[i+a[i][1]+1]+a[i][0]);
            else
            dp[i] = max(dp[i+1],(long long)a[i][0]);
        }
        return dp[0];
    }
};
