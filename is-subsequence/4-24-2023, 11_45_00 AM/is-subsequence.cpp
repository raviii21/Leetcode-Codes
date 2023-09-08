// Link: https://leetcode.com/problems/is-subsequence

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: is-subsequence
 *  RUNTIME: 0 ms
 *  MEMORY: 6.4 MB
 *  DATE: 4-24-2023, 11:45:00 AM
 *
 */

// Solution:

class Solution {
public:
    bool isSubsequence(string s, string t) {
        bool ans = false;
        int n = s.size();
        int m = t.size();
        int k=0;
        for(int i=0; i<m; i++){
            if(s[k]==t[i]){
                k++;
            }
        }
        if(k==n) ans=true;

        return ans;
    }
};
