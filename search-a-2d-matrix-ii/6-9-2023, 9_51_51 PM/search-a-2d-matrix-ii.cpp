// Link: https://leetcode.com/problems/search-a-2d-matrix-ii

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: search-a-2d-matrix-ii
 *  RUNTIME: 153 ms
 *  MEMORY: 14.8 MB
 *  DATE: 6-9-2023, 9:51:51 PM
 *
 */

// Solution:

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& a, int x) {
        int n=a.size();
        int m=a[0].size();

        int i=0,j=m-1;
        while(i<n && j>=0){
            if(a[i][j]==x) return true;
            if(a[i][j]<x) i++;
            else j--;
        }
        return false;
    }
};
