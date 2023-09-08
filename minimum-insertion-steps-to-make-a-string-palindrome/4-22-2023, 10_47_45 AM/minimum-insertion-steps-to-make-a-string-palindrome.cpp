// Link: https://leetcode.com/problems/minimum-insertion-steps-to-make-a-string-palindrome

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: minimum-insertion-steps-to-make-a-string-palindrome
 *  RUNTIME: 103 ms
 *  MEMORY: 28.6 MB
 *  DATE: 4-22-2023, 10:47:45 AM
 *
 */

// Solution:

class Solution {
public:
    int minInsertions(string s) {
        int n = s.size();
        vector<vector<int>> dp(n+1,vector<int>(n+1,0));
        string t = s;
        reverse(t.begin(),t.end());    
        for(int i=1; i<=n; i++){
          for(int j=1; j<=n; j++){
              if(s[i-1]==t[j-1])
                  dp[i][j] = 1+dp[i-1][j-1];
              else 
                  dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
          }
        }
        return n-dp[n][n];
    }
};
