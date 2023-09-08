// Link: https://leetcode.com/problems/excel-sheet-column-title

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: excel-sheet-column-title
 *  RUNTIME: 0 ms
 *  MEMORY: 5.9 MB
 *  DATE: 8-22-2023, 5:13:08 PM
 *
 */

// Solution:

class Solution {
public:
    string convertToTitle(int n) {
        string ans;
        while(n){
            n--;
            ans=ans+(char)(n%26 + 'A');
            n/=26;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
