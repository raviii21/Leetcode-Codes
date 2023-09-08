// Link: https://leetcode.com/problems/array-partition

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: array-partition
 *  RUNTIME: 70 ms
 *  MEMORY: 28.3 MB
 *  DATE: 12-23-2022, 8:53:32 AM
 *
 */

// Solution:

class Solution {
public:
    int arrayPairSum(vector<int>& a) {
        int n=a.size();
        sort(a.begin(),a.end());
        int ans=0;
        for(int i=0; i<n; i+=2){
           ans+=a[i];
        }
        return ans;
    }
};
