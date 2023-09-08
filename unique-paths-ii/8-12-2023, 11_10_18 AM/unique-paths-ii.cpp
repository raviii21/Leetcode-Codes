// Link: https://leetcode.com/problems/unique-paths-ii

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: unique-paths-ii
 *  RUNTIME: 0 ms
 *  MEMORY: 7.8 MB
 *  DATE: 8-12-2023, 11:10:18 AM
 *
 */

// Solution:

class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& a) {
        if(a[0][0]==1) return 0;
        int m = a.size();
        int n = a[0].size();

        vector<vector<int>> dp(m, vector<int>(n,0));

        for(int i=0; i<m; i++) {
            if(a[i][0]==1) break;
            dp[i][0]=1;
        }
        for(int i=0; i<n; i++) {
            if(a[0][i]==1) break;
            dp[0][i]=1;
        }
        for(int i=1; i<m; i++){
             for(int j=1; j<n; j++){
                 if(a[i][j]==1) continue;
                 else dp[i][j]=dp[i-1][j] + dp[i][j-1];
                // cout << dp[i][j] << " ";
            }
            // cout << endl;
        }
        return dp[m-1][n-1]; 
    }
};
