// Link: https://leetcode.com/problems/find-the-difference

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: find-the-difference
 *  RUNTIME: 4 ms
 *  MEMORY: 6.5 MB
 *  DATE: 4-25-2023, 11:35:34 PM
 *
 */

// Solution:

class Solution {
public:
    char findTheDifference(string s, string t) {
        int n=s.size();
        int m = t.size();
        int x = max(n,m) ; 
        sort(s.begin(), s.end()) ; 
        sort(t.begin(), t.end()) ; 
        for (int i = 0 ; i < x ; i ++)
        {
            if (s[i] == t[i])   continue ; 
            else if (s[i] != t[i]) return t[i] ; 
        }
        return t[n] ; 
    }
};
