// Link: https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: find-the-index-of-the-first-occurrence-in-a-string
 *  RUNTIME: 2 ms
 *  MEMORY: 6.5 MB
 *  DATE: 3-3-2023, 10:05:34 AM
 *
 */

// Solution:

class Solution {
public:
    int strStr(string haystack, string needle) {
        int n= haystack.size();
        int m = needle.size();
        int ans = -1;
        for(int i=0; i<=n-m; i++){
            string s = haystack.substr(i,m);
            if(s == needle){
                ans=i;
                break;
            }
        }
        return ans;
    }
};
