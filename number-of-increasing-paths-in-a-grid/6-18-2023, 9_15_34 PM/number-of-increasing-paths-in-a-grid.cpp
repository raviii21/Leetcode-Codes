// Link: https://leetcode.com/problems/number-of-increasing-paths-in-a-grid

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: number-of-increasing-paths-in-a-grid
 *  RUNTIME: 326 ms
 *  MEMORY: 43.4 MB
 *  DATE: 6-18-2023, 9:15:34 PM
 *
 */

// Solution:

class Solution {
public:
    int mod = 1000000007;
    int dx[4] = {1,0,-1,0};
    int dy[4] = {0,1,0,-1};
    
    bool valid(int x,int y, vector<vector<int>>& grid){
        if(x<0 || x>=grid.size() || y<0 || y>=grid[0].size())
         return false;

        return true; 
    }
    
    int dfs(int x, int y, vector<vector<int>>& grid, vector<vector<int>>& dp){
        if(dp[x][y] != -1) return dp[x][y];

        int ans=1;
        for(int i=0; i<4; i++){
            int nx = x+dx[i];
            int ny = y+dy[i];
            if(valid(nx,ny,grid) && grid[x][y]<grid[nx][ny])
             ans = (ans%mod + dfs(nx,ny,grid,dp)%mod) % mod;
        }

        return dp[x][y]=ans%mod;
    }
    int countPaths(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> dp(n,vector<int>(m,-1));
        long long count=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                count = (count%mod + dfs(i,j,grid,dp)%mod) % mod;
            }
        }
        return (int)count%mod;
    }
};
