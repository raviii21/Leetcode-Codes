// Link: https://leetcode.com/problems/faulty-keyboard

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: faulty-keyboard
 *  RUNTIME: 10 ms
 *  MEMORY: 6.5 MB
 *  DATE: 8-6-2023, 1:06:53 PM
 *
 */

// Solution:

class Solution {
public:
    string finalString(string s) {
        int n = s.size();
        string ans="";
        for(int i=0; i<n; i++){
            if(s[i]!='i') ans+=s[i];
            else reverse(ans.begin(),ans.end());
        }
        return ans;
    }
};
