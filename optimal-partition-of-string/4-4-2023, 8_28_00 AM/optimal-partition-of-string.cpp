// Link: https://leetcode.com/problems/optimal-partition-of-string

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: optimal-partition-of-string
 *  RUNTIME: 275 ms
 *  MEMORY: 72.1 MB
 *  DATE: 4-4-2023, 8:28:00 AM
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
