// Link: https://leetcode.com/problems/minimum-remove-to-make-valid-parentheses

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: minimum-remove-to-make-valid-parentheses
 *  RUNTIME: 18 ms
 *  MEMORY: 10.9 MB
 *  DATE: 4-21-2023, 11:48:03 AM
 *
 */

// Solution:

class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int n = s.size();

        int count = 0;
        for(int i=0; i<n; i++){
            if(s[i]=='(') count++;
            else if(s[i]==')'){
                if(count==0) s[i]='.';
                else count--;
            }
        }
        if(count>0){
            for(int i=n-1; i>=0; i--){
               if(count!=0){
                   if(s[i]=='(') {
                       s[i]='.';
                       count--;
                   }
               }else break;
            }
        } 

        string ans;
        for(int i=0; i<n; i++){
          if(s[i]!='.') ans+=s[i];
        }
        return ans;
    }
};
