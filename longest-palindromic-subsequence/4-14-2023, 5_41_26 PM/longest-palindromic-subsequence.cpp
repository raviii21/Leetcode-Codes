// Link: https://leetcode.com/problems/longest-palindromic-subsequence

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: longest-palindromic-subsequence
 *  RUNTIME: 233 ms
 *  MEMORY: 73 MB
 *  DATE: 4-14-2023, 5:41:26 PM
 *
 */

// Solution:

class Solution {
public:
    int longestPalindromeSubseq(string s) {
        int n = s.size();
        string r = s;
        reverse(r.begin(),r.end());

        vector<vector<int>> dp(n+1,vector<int> (n+2,0));
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                    if(s[i-1]==r[j-1]){
                        dp[i][j]=1+dp[i-1][j-1];
                    }else{
                        if(dp[i-1][j] >= dp[i][j-1]) dp[i][j]=dp[i-1][j];
                        else dp[i][j] = dp[i][j-1];
                    }
                
            }
        }

        return dp[n][n];
    }
};
