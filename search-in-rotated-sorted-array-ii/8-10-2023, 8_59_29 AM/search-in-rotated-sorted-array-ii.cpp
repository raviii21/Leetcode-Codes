// Link: https://leetcode.com/problems/search-in-rotated-sorted-array-ii

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: search-in-rotated-sorted-array-ii
 *  RUNTIME: 6 ms
 *  MEMORY: 13.9 MB
 *  DATE: 8-10-2023, 8:59:29 AM
 *
 */

// Solution:

class Solution {
public:
    bool search(vector<int>& a, int x) {
        int n = a.size();
        int l=0,h=n-1;
        while(l<=h){
            int m = (l+h)/2;
            if(a[m] == x)return true;

            if(a[l]==a[m] && a[m]==a[h]){
                h-=1;
                l+=1;
                continue;
            }
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
        return false;
    }
};
