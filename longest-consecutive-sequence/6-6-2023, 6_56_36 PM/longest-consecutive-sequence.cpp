// Link: https://leetcode.com/problems/longest-consecutive-sequence

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: longest-consecutive-sequence
 *  RUNTIME: 99 ms
 *  MEMORY: 43.5 MB
 *  DATE: 6-6-2023, 6:56:36 PM
 *
 */

// Solution:

class Solution {
public:
    int longestConsecutive(vector<int>& a) {
        int n = a.size();
        sort(a.begin(),a.end());
        if(n==0) return 0;
        int maxi = INT_MIN;
        int count=1;
        for(int i=0; i<n-1; i++){
          if(a[i+1]-a[i]==1 || a[i+1]-a[i]==0){
              if(a[i+1]-a[i]==1) count++;
          }
          else{
              maxi=max(maxi,count);
              count=1;
          }
        }
        maxi=max(maxi,count);
        return maxi;
    }
};
