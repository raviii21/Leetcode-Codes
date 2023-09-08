// Link: https://leetcode.com/problems/matrix-diagonal-sum

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: matrix-diagonal-sum
 *  RUNTIME: 11 ms
 *  MEMORY: 11.3 MB
 *  DATE: 5-8-2023, 11:22:50 AM
 *
 */

// Solution:

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat[0].size();
        int ans=0;
          for(int i=0; i<n; i++){
            ans+=mat[i][i];
            ans+=mat[i][n-i-1];
          }
         if(n%2==1)  ans-=mat[n/2][n/2];
         return ans;
    }
};
