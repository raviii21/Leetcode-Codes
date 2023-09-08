// Link: https://leetcode.com/problems/valid-anagram

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: valid-anagram
 *  RUNTIME: 18 ms
 *  MEMORY: 7.4 MB
 *  DATE: 2-25-2023, 7:04:47 PM
 *
 */

// Solution:

class Solution {
public:
    bool isAnagram(string s, string t) {
        bool ans;
        map<char,int> m,p;
        for(auto it: s) m[it]++;
        for(auto it: t) p[it]++;

        if(m==p) ans=true;
        else ans = false;
        return ans;
    }
};
