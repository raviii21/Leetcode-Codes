// Link: https://leetcode.com/problems/isomorphic-strings

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: isomorphic-strings
 *  RUNTIME: 9 ms
 *  MEMORY: 7.2 MB
 *  DATE: 6-15-2023, 8:45:28 PM
 *
 */

// Solution:

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n=s.size();
        map<char,char> m;
        map<char,char> p;
        bool ans= true;
        for(int i=0; i<n; i++){
           if(m.find(s[i])==m.end()){
               m[s[i]]=t[i];
           }else{
               if(m[s[i]] != t[i]){
                   ans=false;
                   break;
               }
           }
        }
        for(int i=0; i<n; i++){
           if(p.find(t[i])==p.end()){
               p[t[i]]=s[i];
           }else{
               if(p[t[i]] != s[i]){
                   ans=false;
                   break;
               }
           }
        }

        return ans;
    }
};
