// Link: https://leetcode.com/problems/repeated-substring-pattern

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: repeated-substring-pattern
 *  RUNTIME: 142 ms
 *  MEMORY: 124.5 MB
 *  DATE: 8-21-2023, 9:09:50 AM
 *
 */

// Solution:

class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.size();
        for (int i=1; i<=n/2; i++) {
            if (n%i==0) {
                string pattern = "";
                for (int j=0; j<n/i; j++) {
                    pattern += s.substr(0, i);
                }
                if (s == pattern) {
                    return true;
                }
            }
        }
        return false;
    }
};
