// Link: https://leetcode.com/problems/validate-stack-sequences

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: validate-stack-sequences
 *  RUNTIME: 14 ms
 *  MEMORY: 15.4 MB
 *  DATE: 4-13-2023, 10:51:03 PM
 *
 */

// Solution:

class Solution {
public:
    bool validateStackSequences(vector<int>& a, vector<int>& b) {
        int n = a.size();
        int k=0;
        stack<int> s;
        bool ans=false;
        for(int i=0; i<n; i++){
            s.push(a[i]);
            while(s.top()==b[k]){
                s.pop();
                k++;
                if(s.empty())
                break;
            }
        }
        if(s.empty()) ans=true;

        return ans;
    }
};
