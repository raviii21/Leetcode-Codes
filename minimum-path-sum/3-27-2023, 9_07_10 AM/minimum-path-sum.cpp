// Link: https://leetcode.com/problems/minimum-path-sum

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: minimum-path-sum
 *  RUNTIME: 14 ms
 *  MEMORY: 9.6 MB
 *  DATE: 3-27-2023, 9:07:10 AM
 *
 */

// Solution:

class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(j>=1 && i==0) grid[i][j]+=grid[i][j-1];
                if(i>=1 && j==0) grid[i][j]+=grid[i-1][j];
                if(i>=1 && j>=1) grid[i][j]+=min(grid[i][j-1],grid[i-1][j]);
            }
        }
        return grid[m-1][n-1];
    }
};
