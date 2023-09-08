// Link: https://leetcode.com/problems/counting-bits

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: counting-bits
 *  RUNTIME: 3 ms
 *  MEMORY: 7.9 MB
 *  DATE: 9-1-2023, 9:56:42 PM
 *
 */

// Solution:

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n+1,0);
        for(int i=1; i<=n; i++){
            ans[i]=ans[i/2]+i%2;
        }
        return ans;
    }
};
