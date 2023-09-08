// Link: https://leetcode.com/problems/simplify-path

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: simplify-path
 *  RUNTIME: 8 ms
 *  MEMORY: 10.6 MB
 *  DATE: 4-12-2023, 12:05:31 PM
 *
 */

// Solution:

class Solution {
public:
    string simplifyPath(string path) {
        int n = path.size();
        stack<string> st;
        string ans;
        for(int i=0; i<n; i++){
            if(path[i]=='/')continue;
            string t;
            while(i<path.size() && path[i]!='/'){
                t+=path[i];
                i++;
            }
            if(t==".") continue;
            else if(t==".."){
                if(!st.empty()) st.pop();
            }else{
                st.push(t);
            }
        }
        while(!st.empty()){
            ans='/'+st.top()+ans;
            st.pop();
        }
        if(ans.size()==0){
            return "/";
        }
        return ans;
    }
};
