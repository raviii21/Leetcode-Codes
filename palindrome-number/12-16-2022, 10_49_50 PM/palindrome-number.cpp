// Link: https://leetcode.com/problems/palindrome-number

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: palindrome-number
 *  RUNTIME: 15 ms
 *  MEMORY: 5.9 MB
 *  DATE: 12-16-2022, 10:49:50 PM
 *
 */

// Solution:

class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        int n = s.size();
        for(int i = 0; i<n/2; i++){
            if(s[i]!=s[n-1-i]){
                return false;
            }
        }
        return true;
    }
};
