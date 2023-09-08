// Link: https://leetcode.com/problems/check-if-strings-can-be-made-equal-with-operations-i

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: check-if-strings-can-be-made-equal-with-operations-i
 *  RUNTIME: 0 ms
 *  MEMORY: 5.9 MB
 *  DATE: 9-4-2023, 6:57:24 PM
 *
 */

// Solution:

class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        if(s1 == s2) return true;
        if(s1[0]!=s2[0]){
            char ch = s1[0];
            s1[0]=s1[2];
            s1[2]=ch;
        } 
        if(s1[1]!=s2[1]) {
            char ch = s1[1];
            s1[1]=s1[3];
            s1[3]=ch;
        }
        
        if(s1 == s2) return true;
        return false;
    }
};
