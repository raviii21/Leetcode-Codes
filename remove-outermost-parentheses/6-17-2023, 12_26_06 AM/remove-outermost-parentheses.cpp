// Link: https://leetcode.com/problems/remove-outermost-parentheses

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: remove-outermost-parentheses
 *  RUNTIME: 3 ms
 *  MEMORY: 6.8 MB
 *  DATE: 6-17-2023, 12:26:06 AM
 *
 */

// Solution:

class Solution {
public:
    string removeOuterParentheses(string s) {
        int n=s.size();
        stack<char> st;
        string ans="";
        for(int i=0; i<n; i++){
            if(!st.empty()) ans+=s[i];
            if(s[i]=='(') st.push(s[i]);
            else{
                st.pop();
                if(st.empty()) ans.pop_back();
            }
        }
        return ans;
    }
};
