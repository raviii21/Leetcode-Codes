// Link: https://leetcode.com/problems/01-matrix

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: 01-matrix
 *  RUNTIME: 61 ms
 *  MEMORY: 30.2 MB
 *  DATE: 8-17-2023, 10:50:04 AM
 *
 */

// Solution:

class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        if(m==0 || n==0) return mat;

        vector<vector<int>> dist(m,vector<int>(n,0));
        queue<pair<int,int>> q;

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(mat[i][j] == 0) q.push({i,j});
                else dist[i][j] = INT_MAX;
            }
        }

        vector<pair<int,int>> v = {{1,0},{-1,0},{0,1},{0,-1}};
        while(!q.empty()){
            auto it = q.front();
            q.pop();
            int a = it.first;
            int b = it.second;
            for(auto itr: v){
                int aa = a+ itr.first;
                int bb = b+ itr.second;
                if(aa >= 0 && aa<m && bb>=0 && bb < n){
                    if(dist[aa][bb] > dist[a][b]+1){
                        dist[aa][bb] = dist[a][b]+1;
                        q.push({aa,bb});
                    }
                }
            }
        }
        return dist;
    }
};
