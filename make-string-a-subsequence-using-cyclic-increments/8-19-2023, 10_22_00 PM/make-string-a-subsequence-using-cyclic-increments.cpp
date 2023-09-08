// Link: https://leetcode.com/problems/make-string-a-subsequence-using-cyclic-increments

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: make-string-a-subsequence-using-cyclic-increments
 *  RUNTIME: 37 ms
 *  MEMORY: 14.1 MB
 *  DATE: 8-19-2023, 10:22:00 PM
 *
 */

// Solution:

class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        int m = str1.size();
        int n = str2.size();
        int i=0,j=0;
        while(i<m && j<n){
            if(str1[i] == str2[j]){
                i++;
                j++;
            }else{
                if(str1[i] == 'z') str1[i]='a';
                else str1[i]++;
                if(str1[i] == str2[j]){
                    i++;
                    j++;
                }else{
                    if(str1[i]=='a') str1[i]='z';
                    else str1[i]--;
                    i++;
                }
            }
        }
        if(j==n) return true;
        return false;
    }
};
