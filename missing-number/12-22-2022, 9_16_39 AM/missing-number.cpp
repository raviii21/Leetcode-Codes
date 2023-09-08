// Link: https://leetcode.com/problems/missing-number

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: missing-number
 *  RUNTIME: 14 ms
 *  MEMORY: 18 MB
 *  DATE: 12-22-2022, 9:16:39 AM
 *
 */

// Solution:

class Solution {
public:
    int missingNumber(vector<int>& a) {
        int n=a.size();
        int x=0,y=0;
        for(int i=0; i<n; i++){
          x^=a[i];
          y^=i;           
        }
        y^=n;
        return x^y;
    }
};
