// Link: https://leetcode.com/problems/spiral-matrix-ii

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: spiral-matrix-ii
 *  RUNTIME: 5 ms
 *  MEMORY: 6.6 MB
 *  DATE: 5-10-2023, 1:12:38 PM
 *
 */

// Solution:

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int row = n-1;
        int col= n-1;
        int i=0,j=0;
        int x=1;
        int matrix[n][n];
        while(j<=col && i<=row){
            for(int k=j; k<=col; k++) matrix[i][k]=x++;
            for(int k=i+1; k<=row; k++) matrix[k][col]=x++;
            if(i<row && j<col){
                for(int k=col-1; k>=j; k--) matrix[row][k] = x++;
                for(int k=row-1; k>i; k--) matrix[k][j]=x++;
            }
            i++;
            j++;
            row--;
            col--;
        }
        vector<vector<int>> ans;
        for(int k=0; k<n; k++){
            vector<int> dummy;
            for(int t=0; t<n; t++) dummy.push_back(matrix[k][t]);
            ans.push_back(dummy);
        }
        return ans;
    }
};
