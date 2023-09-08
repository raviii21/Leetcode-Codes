// Link: https://leetcode.com/problems/merge-strings-alternately

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: merge-strings-alternately
 *  RUNTIME: 4 ms
 *  MEMORY: 6.4 MB
 *  DATE: 4-18-2023, 8:59:36 AM
 *
 */

// Solution:

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n = word1.size();
        int m = word2.size();
        string ans;
        int i=0,j=0;

        while(ans.size() < (n+m)){
            if(i<=(n-1)){
                ans+=word1[i];
                i++;
            }
            if(j<=(m-1)){
                ans+=word2[j];
                j++;
            }
        }
        return ans;
    }
};
