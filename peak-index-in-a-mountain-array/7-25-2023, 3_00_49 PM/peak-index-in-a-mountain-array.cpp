// Link: https://leetcode.com/problems/peak-index-in-a-mountain-array

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: peak-index-in-a-mountain-array
 *  RUNTIME: 138 ms
 *  MEMORY: 59.6 MB
 *  DATE: 7-25-2023, 3:00:49 PM
 *
 */

// Solution:

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int l=0,h=n-1;
        while(l<h){
            int m = (l+h)/2;
            if(arr[m]>arr[m+1])h=m;
            else l=m+1;
        }
        return l;
    }
};
