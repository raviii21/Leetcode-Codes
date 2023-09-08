// Link: https://leetcode.com/problems/longest-substring-without-repeating-characters

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: longest-substring-without-repeating-characters
 *  RUNTIME: 24 ms
 *  MEMORY: 8.5 MB
 *  DATE: 6-22-2023, 10:41:21 AM
 *
 */

// Solution:

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int length=0,maxlength=0,k=0;

        map<char,int> m;
        for(int i=0; i<n; i++){
            m[s[i]]++;
            length++;
            while(m[s[i]] > 1){
                m[s[k++]]--;
                length--;
            }
            maxlength = max(maxlength,length);
        } 
        return maxlength;
    }
};
