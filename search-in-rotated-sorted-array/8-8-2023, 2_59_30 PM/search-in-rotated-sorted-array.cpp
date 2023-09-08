// Link: https://leetcode.com/problems/search-in-rotated-sorted-array

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: search-in-rotated-sorted-array
 *  RUNTIME: 7 ms
 *  MEMORY: 11.1 MB
 *  DATE: 8-8-2023, 2:59:30 PM
 *
 */

// Solution:

class Solution {
public:
    int search(vector<int>& a, int x) {
        int n = a.size();
        int l=0,h=n-1;
        while(l<=h){
            int m = (l+h)/2;
            if(a[m] == x)return m;

            if(a[l] <= a[m]){
            // LeftSide is sorted.
               if(a[l]<=x && a[m]>=x) h=m-1;
               else l=m+1;
            }else{
                // RightSide is Sorted.
                if(a[m]<=x && a[h]>=x) l=m+1;
                else h=m-1;
            }
        }
        return -1;
    }
};
