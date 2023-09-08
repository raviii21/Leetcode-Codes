// Link: https://leetcode.com/problems/optimal-partition-of-string

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: optimal-partition-of-string
 *  RUNTIME: 255 ms
 *  MEMORY: 72 MB
 *  DATE: 3-23-2023, 11:03:34 PM
 *
 */

// Solution:

class Solution {
public:
    int partitionString(string s) {
        int n = s.size();
        map<char,int> m;
        int ans=0;
        for(int i=0; i<n; i++){
            m[s[i]]++;
            if(m[s[i]]==2){
                m.clear();
                m[s[i]]++;
                ans++;
            }
        }
        return ans+1;
    }
};
