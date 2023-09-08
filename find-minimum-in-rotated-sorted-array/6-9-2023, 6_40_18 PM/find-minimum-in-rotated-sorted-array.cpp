// Link: https://leetcode.com/problems/find-minimum-in-rotated-sorted-array

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: find-minimum-in-rotated-sorted-array
 *  RUNTIME: 10 ms
 *  MEMORY: 10 MB
 *  DATE: 6-9-2023, 6:40:18 PM
 *
 */

// Solution:

class Solution {
public:
    int findMin(vector<int>& a) {
        int n = a.size();
        if(n==1) return a[0];
        if(a[n-1]>a[0]) return a[0];
        int l=0,h=n-1;
        while(l<=h){
            int m = (l+h)/2;
            
            if(a[m]>a[m+1]) return a[m+1];
            if(a[m]<a[m-1]) return a[m];
            if(a[0] < a[m]) l=m+1;
            else h=m-1;
        }
        return 0;
    }
};
