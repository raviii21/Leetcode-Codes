// Link: https://leetcode.com/problems/number-of-music-playlists

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: number-of-music-playlists
 *  RUNTIME: 0 ms
 *  MEMORY: 9.2 MB
 *  DATE: 8-6-2023, 2:00:31 PM
 *
 */

// Solution:

class Solution {
public:
    int MOD = 1e9+7;
    int numMusicPlaylists(int n, int goal, int k) {
        // 3 3 1
        // 2 3 0
        // 2 3 1
        vector<vector<long>> dp(goal+1, vector<long>(n+1,0));
        dp[0][0]=1;

        for(int i=1; i<=goal; i++){
            int x=min(i,n);
            for(int j=1; j<=x; j++){
                dp[i][j]=dp[i-1][j-1] * (n-j+1) % MOD;
                if(j>k) dp[i][j]=(dp[i][j] + dp[i-1][j]*(j-k)) % MOD;
            }
        }
        return dp[goal][n];
    }
};
