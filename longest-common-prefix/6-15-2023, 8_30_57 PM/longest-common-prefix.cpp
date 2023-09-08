// Link: https://leetcode.com/problems/longest-common-prefix

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: longest-common-prefix
 *  RUNTIME: 4 ms
 *  MEMORY: 9.2 MB
 *  DATE: 6-15-2023, 8:30:57 PM
 *
 */

// Solution:

class Solution {
public:
    string longestCommonPrefix(vector<string>& a) {
        int n=a.size();
        sort(a.begin(),a.end());
        string ans;
        if(n==0) return ans;
        string first=a[0];
        string last=a[n-1];

        for(int i=0; i<first.size(); i++){
            if(first[i]==last[i]) ans+=first[i];
            else break;
        }
        return ans;
    }
};
