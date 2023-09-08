// Link: https://leetcode.com/problems/h-index

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: h-index
 *  RUNTIME: 3 ms
 *  MEMORY: 8.5 MB
 *  DATE: 5-26-2023, 10:19:31 AM
 *
 */

// Solution:

class Solution {
public:
    int hIndex(vector<int>& a) {
        int n = a.size();
        sort(a.begin(),a.end());
        int ans = 0;
        for(int i=0; i<n; i++){
            if(a[i] <= (n-i)) ans = a[i];
            else{
            ans = max(ans,n-i);  
            break;
            } 
        }
         return ans;
    }
};
