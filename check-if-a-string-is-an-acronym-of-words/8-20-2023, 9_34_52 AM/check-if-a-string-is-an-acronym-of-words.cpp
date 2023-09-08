// Link: https://leetcode.com/problems/check-if-a-string-is-an-acronym-of-words

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: check-if-a-string-is-an-acronym-of-words
 *  RUNTIME: 12 ms
 *  MEMORY: 38.8 MB
 *  DATE: 8-20-2023, 9:34:52 AM
 *
 */

// Solution:

class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string t;
        int n=words.size();
        for(string it: words){
            t.push_back(it[0]);
        }
        if(t==s) return true;
        return false;
    }
};
