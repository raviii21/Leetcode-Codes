// Link: https://leetcode.com/problems/number-of-enclaves

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: number-of-enclaves
 *  RUNTIME: 78 ms
 *  MEMORY: 29.3 MB
 *  DATE: 4-7-2023, 8:28:44 AM
 *
 */

// Solution:

class Solution {
public:

    bool valid(int i,int j,int n, int m,vector<vector<int>>& grid) {
        if(i>=0 && j>=0 && i<n && j<m){
            if(grid[i][j]==1) return true;
            else return false;
        }
        return false;
    }

    void dfs(int i,int j, int n,int m, vector<vector<int>>& grid) {
        grid[i][j]=0;

        int x[4]={1,-1,0,0};
        int y[4]={0,0,1,-1};

        for(int k=0; k<4; k++){
            int a = i+x[k];
            int b = j+y[k];

            if(valid(a,b,n,m,grid)){
                dfs(a,b,n,m,grid);
            }
        }
    }
    int numEnclaves(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(i==0 || j==0 || i==(n-1) || j==(m-1)){
                    if(grid[i][j]==1){
                        dfs(i,j,n,m,grid);
                    }
                }
            }
        }

        int ans=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j]==1) ans++;
            }
        }
        return ans;
    }
};
