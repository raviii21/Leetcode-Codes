// Link: https://leetcode.com/problems/valid-parentheses

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: valid-parentheses
 *  RUNTIME: 0 ms
 *  MEMORY: 6.2 MB
 *  DATE: 4-10-2023, 1:29:50 PM
 *
 */

// Solution:

class Solution {
public:
    bool isValid(string s) {
        int n=s.size();
        stack<char> st;
        for(int i=0; i<n; i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                st.push(s[i]);
            }else{
                if(st.empty()) return false;
                else if((st.top()=='('&&s[i]==')') || (st.top()=='{'&&s[i]=='}') || (st.top()=='['&&s[i]==']'))
                 st.pop();
                else return false; 
            }
        }
        return st.empty();
    }
};
