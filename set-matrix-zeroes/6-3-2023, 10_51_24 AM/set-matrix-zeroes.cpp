// Link: https://leetcode.com/problems/set-matrix-zeroes

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: set-matrix-zeroes
 *  RUNTIME: 20 ms
 *  MEMORY: 13.5 MB
 *  DATE: 6-3-2023, 10:51:24 AM
 *
 */

// Solution:

class Solution {
public:
    void setZeroes(vector<vector<int>>& a) {
        int n = a.size();
        int m = a[0].size();
        set<int> row,col;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(a[i][j]==0){
                  row.insert(i);
                  col.insert(j);
                }
            }
        }
        for(auto it : row){
            for(int i=0;i<m;i++){
                a[it][i]=0;
            }
        }
        for(auto it : col){
            for(int i=0;i<n;i++){
                a[i][it]=0;
            }
        }
    }
};
