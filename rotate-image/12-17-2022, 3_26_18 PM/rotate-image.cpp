// Link: https://leetcode.com/problems/rotate-image

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: rotate-image
 *  RUNTIME: 5 ms
 *  MEMORY: 7.1 MB
 *  DATE: 12-17-2022, 3:26:18 PM
 *
 */

// Solution:

class Solution {
public:
    void rotate(vector<vector<int>>& a) {
        int n = a.size();
        for(int i=0; i<n ; i++){
            for(int j=i;j<n;j++){
                std:; swap(a[i][j],a[j][i]);
            }
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<n/2;j++){
               std:: swap(a[i][j],a[i][n-j-1]);
            }
        }
    }
};
