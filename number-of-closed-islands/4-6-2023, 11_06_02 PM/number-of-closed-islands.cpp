// Link: https://leetcode.com/problems/number-of-closed-islands

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: number-of-closed-islands
 *  RUNTIME: 13 ms
 *  MEMORY: 9.4 MB
 *  DATE: 4-6-2023, 11:06:02 PM
 *
 */

// Solution:

class Solution {
public:

   bool valid(int a,int b, int n,int m,vector<vector<int>>& grid){
       if(a>=0 && b>=0 && a<n && b<m){
           if(grid[a][b] == 0){
               return true;
           }
           else return false;
       }
       return false;
   }

    void dfs(int i,int j,int n,int m,vector<vector<int>>& grid) {
        grid[i][j]=1;

        int x[4] = {1,-1,0,0};
        int y[4] = {0,0,1,-1};

        for(int k=0; k<4; k++){
            int a=i+x[k];
            int b=j+y[k];
            if(valid(a,b,n,m,grid)){
                dfs(a,b,n,m,grid);
            }
        }
    }
    int closedIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(i==0 || i==n-1 || j==0 || j==m-1){
                    if(grid[i][j]==0) {
                        dfs(i,j,n,m,grid);
                    }
                }
            }
        }

        int ans=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
               if(grid[i][j]==0){
                   dfs(i,j,n,m,grid);
                   ans++;
               }
            }
        }
        
        return ans;
    }
};
