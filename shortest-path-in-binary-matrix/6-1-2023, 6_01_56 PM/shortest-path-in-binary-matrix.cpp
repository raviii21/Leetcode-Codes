// Link: https://leetcode.com/problems/shortest-path-in-binary-matrix

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: shortest-path-in-binary-matrix
 *  RUNTIME: 67 ms
 *  MEMORY: 19.1 MB
 *  DATE: 6-1-2023, 6:01:56 PM
 *
 */

// Solution:

class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        if(grid[0][0]==1 || grid[n-1][n-1]==1){
            return -1;
        }
        grid[0][0]=1;
        int k=0;
        queue<pair<int,int>> q;
        q.push(make_pair(0,0));
        while(!q.empty()){
             k++;
             int size = q.size();
             while(size--){
                 int a=q.front().first;
                 int b=q.front().second;
                 q.pop();
                 if(a==n-1 && b==n-1) {
                    return k;
                 }

                 int aa[8]={1,-1,0,0,1,1,-1,-1};
                 int bb[8]={0,0,1,-1,1,-1,1,-1};
                 for(int i=0; i<8; i++){
                     int x=a+aa[i];
                     int y=b+bb[i];
                     if(x>=0 && x<n && y>=0 && y<n && grid[x][y]==0){
                       q.push(make_pair(x,y));
                       grid[x][y]=1;
                     }
                 }
             }
        }
        return -1;
    }
};
