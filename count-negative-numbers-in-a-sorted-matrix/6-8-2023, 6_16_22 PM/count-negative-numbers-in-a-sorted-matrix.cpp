// Link: https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: count-negative-numbers-in-a-sorted-matrix
 *  RUNTIME: 15 ms
 *  MEMORY: 10.3 MB
 *  DATE: 6-8-2023, 6:16:22 PM
 *
 */

// Solution:

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int n = grid.size();
        int m=grid[0].size();
        int ans = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j] < 0) {
                    ans+=m-j;
                    break;
                }
            }
        }
        return ans;
    }
};
