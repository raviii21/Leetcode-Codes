// Link: https://leetcode.com/problems/next-greater-element-i

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: next-greater-element-i
 *  RUNTIME: 40 ms
 *  MEMORY: 8.5 MB
 *  DATE: 12-20-2022, 2:53:46 PM
 *
 */

// Solution:

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& a, vector<int>& b) {
        int x=a.size(),y=b.size();
        vector<int> v(y,-1);
        stack<int> s;
        for(int i=y-1; i>=0; i--){
            while(!s.empty() && s.top()<=b[i]){
                s.pop();
            }
            if(!s.empty()) v[i]=s.top();

            s.push(b[i]);
        }

        vector<int> ans;
        for(int i=0; i<x; i++){
            for(int j=0; j<y; j++){
                if(a[i]==b[j]) ans.push_back(v[j]);
            }
        }
        return ans;
    }
};
