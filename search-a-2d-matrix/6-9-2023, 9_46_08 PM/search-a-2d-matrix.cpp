// Link: https://leetcode.com/problems/search-a-2d-matrix

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: search-a-2d-matrix
 *  RUNTIME: 6 ms
 *  MEMORY: 9.3 MB
 *  DATE: 6-9-2023, 9:46:08 PM
 *
 */

// Solution:

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& a, int x) {
        int n = a.size();
        int m = a[0].size();

        int l=0,h=(n*m)-1;
        while(l<=h){
            int mid=(l+h)/2;
            if(a[mid/m][mid%m] == x) return true;
            else if(a[mid/m][mid%m] > x) h=mid-1;
            else l=mid+1;
        }
        return false;
    }
};
