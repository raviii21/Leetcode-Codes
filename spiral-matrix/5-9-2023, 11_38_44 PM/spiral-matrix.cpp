// Link: https://leetcode.com/problems/spiral-matrix

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: spiral-matrix
 *  RUNTIME: 0 ms
 *  MEMORY: 6.9 MB
 *  DATE: 5-9-2023, 11:38:44 PM
 *
 */

// Solution:

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row = matrix.size()-1;
        int col= matrix[0].size()-1;
        int i=0,j=0;
        vector<int> ans;
        while(j<=col && i<=row){
            for(int k=j; k<=col; k++) ans.push_back(matrix[i][k]);
            for(int k=i+1; k<=row; k++) ans.push_back(matrix[k][col]);
            if(i<row && j<col){
                for(int k=col-1; k>=j; k--) ans.push_back(matrix[row][k]);
                for(int k=row-1; k>i; k--) ans.push_back(matrix[k][j]);
            }
            i++;
            j++;
            row--;
            col--;
        }
        return ans;
    }
};
