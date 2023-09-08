// Link: https://leetcode.com/problems/longest-substring-without-repeating-characters

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: longest-substring-without-repeating-characters
 *  RUNTIME: 9 ms
 *  MEMORY: 8.3 MB
 *  DATE: 12-21-2022, 3:32:43 PM
 *
 */

// Solution:

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        vector<int> v(256,-1);
        int l=0,r=0,len=0;

        while(r<n){
            if(v[s[r]] != -1) 
             l=max(v[s[r]]+1, l);

            v[s[r]]=r;
            len=max(len,r-l+1);
            r++; 
        }
        return len;
       
    }
};
