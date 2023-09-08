// Link: https://leetcode.com/problems/maximum-length-of-pair-chain

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: maximum-length-of-pair-chain
 *  RUNTIME: 45 ms
 *  MEMORY: 22.6 MB
 *  DATE: 8-26-2023, 9:44:03 AM
 *
 */

// Solution:

class Solution {
public:
    void func(vector<vector<int>>& a){
        int n = a.size();
        for(int i=0; i<n; i++) swap(a[i][0],a[i][1]);
    }
    int findLongestChain(vector<vector<int>>& pairs) {
        int n = pairs.size();
        func(pairs);
        sort(pairs.begin(),pairs.end());
        func(pairs);
        
        int ans=1;
        int j=0;
        for(int i=0; i<n-1; i++){
           if(pairs[j][1] < pairs[i+1][0]) {
               ans++;
               j=i+1;;
           }
        }
        return ans;
    }
};
