// Link: https://leetcode.com/problems/valid-palindrome

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: valid-palindrome
 *  RUNTIME: 14 ms
 *  MEMORY: 8 MB
 *  DATE: 7-21-2023, 11:47:31 AM
 *
 */

// Solution:

class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        string t="";
        for(int i=0; i<n; i++){
            if(s[i]>=48 && s[i]<=57) t+=s[i];
            else if(s[i]>=97 && s[i]<=122) t+=s[i];
            else if(s[i]>=65 && s[i]<=90) {
                s[i]+=32;
                t+=s[i];
            }else{

            }
        }
        
        string r = t;
        reverse(r.begin(),r.end());

        cout << t << endl;
        cout << r << endl;
        if(r==t) return true;

        return false;
         
    }
};
