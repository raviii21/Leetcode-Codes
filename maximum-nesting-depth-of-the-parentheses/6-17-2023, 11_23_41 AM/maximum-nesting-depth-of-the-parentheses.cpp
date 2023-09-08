// Link: https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: maximum-nesting-depth-of-the-parentheses
 *  RUNTIME: 0 ms
 *  MEMORY: 6.4 MB
 *  DATE: 6-17-2023, 11:23:41 AM
 *
 */

// Solution:

class Solution {
public:
    int maxDepth(string s) {
        int n = s.size();
        int ans;
        // int ans1;
        int flag=0;
        vector<int> v;
        for(int i=0; i<n; i++){
            if(s[i]=='(') flag++;
            else if(s[i]==')') flag--;
           
            v.push_back(flag);
        }
        ans=*max_element(v.begin(),v.end());
        return ans;
    }
};
