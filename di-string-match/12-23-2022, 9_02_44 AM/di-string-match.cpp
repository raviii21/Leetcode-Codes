// Link: https://leetcode.com/problems/di-string-match

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: di-string-match
 *  RUNTIME: 11 ms
 *  MEMORY: 9 MB
 *  DATE: 12-23-2022, 9:02:44 AM
 *
 */

// Solution:

class Solution {
public:
    vector<int> diStringMatch(string s) {
        int n=s.size();
        int high=n;
        int low=0;
        vector<int> ans;
        for(int i=0; i<n; i++){
            if(s[i]=='I') ans.push_back(low++);
            else ans.push_back(high--); 

            if(i==n-1) ans.push_back(low);
        }
        return ans;
    }
};
