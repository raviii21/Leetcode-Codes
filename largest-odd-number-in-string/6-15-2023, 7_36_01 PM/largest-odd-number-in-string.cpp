// Link: https://leetcode.com/problems/largest-odd-number-in-string

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: largest-odd-number-in-string
 *  RUNTIME: 28 ms
 *  MEMORY: 15.8 MB
 *  DATE: 6-15-2023, 7:36:01 PM
 *
 */

// Solution:

class Solution {
public:
    string largestOddNumber(string num) {
        string ans;
        int n=num.size();
        for(int i=n-1; i>=0; i--){
           if((num[i]-'0') %2 !=0) return ans=num.substr(0,i+1);
        }
        return ans;
    }
};
