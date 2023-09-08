// Link: https://leetcode.com/problems/removing-stars-from-a-string

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: removing-stars-from-a-string
 *  RUNTIME: 74 ms
 *  MEMORY: 24.7 MB
 *  DATE: 4-11-2023, 2:56:01 PM
 *
 */

// Solution:

class Solution {
public:
    string removeStars(string s) {
        string ans;
        int count=0;
        int n = s.size();
        for(int i=n-1; i>=0; i--){
            if(s[i]=='*') count++;
            else{
                if(count==0) ans+=s[i];
                if(count>0) count--;
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
