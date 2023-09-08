// Link: https://leetcode.com/problems/number-of-1-bits

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: number-of-1-bits
 *  RUNTIME: 6 ms
 *  MEMORY: 6.1 MB
 *  DATE: 7-23-2023, 4:17:37 PM
 *
 */

// Solution:

class Solution {
public:
    int hammingWeight(uint32_t n) {
        string s = bitset<32>(n).to_string();
        int ans=0;
        int m=s.size();
        for(int i=0; i<m; i++) if(s[i]=='1') ans++;
        return ans;
    }
};
