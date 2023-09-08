// Link: https://leetcode.com/problems/length-of-last-word

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: length-of-last-word
 *  RUNTIME: 5 ms
 *  MEMORY: 6.6 MB
 *  DATE: 6-9-2023, 6:13:01 PM
 *
 */

// Solution:

class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.size();
        int ans=0;
        for(int i=n-1; i>=0; i--){
            if(s[i]!=' ') ans++;
            else   if(ans!=0)break;
        }
        return ans;
    }
};
