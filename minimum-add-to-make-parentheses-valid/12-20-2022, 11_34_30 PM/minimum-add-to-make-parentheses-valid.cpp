// Link: https://leetcode.com/problems/minimum-add-to-make-parentheses-valid

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: minimum-add-to-make-parentheses-valid
 *  RUNTIME: 0 ms
 *  MEMORY: 6.1 MB
 *  DATE: 12-20-2022, 11:34:30 PM
 *
 */

// Solution:

class Solution {
public:
    int minAddToMakeValid(string s) {
        int n=s.size();
        int a=0,b=0;
        if(n==0) return 0;

        stack<char> st;
        for(int i=0; i<n; i++){
            if(s[i]==')'){
                if(!st.empty() && st.top()=='(')
                 st.pop();
                else
                 st.push(s[i]); 
            } 
            else st.push(s[i]);  
        }

        while(!st.empty()){
            if(st.top()=='(') a++;
            else b++;

            st.pop();
        }

        return a+b;

    }
};
