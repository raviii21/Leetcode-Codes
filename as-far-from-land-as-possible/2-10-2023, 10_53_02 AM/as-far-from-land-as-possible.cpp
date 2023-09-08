// Link: https://leetcode.com/problems/as-far-from-land-as-possible

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: as-far-from-land-as-possible
 *  RUNTIME: 56 ms
 *  MEMORY: 16.6 MB
 *  DATE: 2-10-2023, 10:53:02 AM
 *
 */

// Solution:

class Solution {
public:
    int maxDistance(vector<vector<int>>& grid) {
        int n = grid.size();
        int ans=INT_MIN;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j]!=1){
                    int top=2*n;
                    int left=2*n;
                    if(i-1 >= 0) top=grid[i-1][j];
                    if(j-1 >= 0) left=grid[i][j-1];
                    grid[i][j]=min(top,left)+1;
                }
            }
        }

        for(int i=n-1; i>=0; i--){
            for(int j=n-1; j>=0; j--){
                if(grid[i][j]!=1){
                    int bottom=2*n;
                    int right=2*n;
                    if(i+1 <= n-1) bottom=grid[i+1][j];
                    if(j+1 <= n-1) right=grid[i][j+1];
                    grid[i][j]=min(grid[i][j],min(bottom,right)+1);
                }
            }
        }


        for(int i=0; i<n; i++) for(int j=0; j<n; j++)    ans = max(ans,grid[i][j]);
            
      if(ans ==2*(n+1) || ans==1) return -1;
      else return ans-1;

    }
};
