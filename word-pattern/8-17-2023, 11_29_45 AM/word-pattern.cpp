// Link: https://leetcode.com/problems/word-pattern

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: word-pattern
 *  RUNTIME: 3 ms
 *  MEMORY: 6.7 MB
 *  DATE: 8-17-2023, 11:29:45 AM
 *
 */

// Solution:

class Solution {
public:
    bool wordPattern(string pattern, string s) {
        int n = pattern.size();
        int m = s.size();
        bool ans = true;
        
        int ns=0;
        for(int i=0; i<m; i++) if(s[i]==' ') ns++;
        if(ns+1 != n) return false;

        map<int,string> mp;
        string t="";
        int k=0;
        for(int i=0; i<m; i++){
            if(s[i]!=' ') t+=s[i];
            else{
                mp[k] = t;
                t="";
                k++;
            }
        }
        mp[k]=t;

        map<char,string> x;
        map<string,char> z;
        for(auto it : mp){
            int ind = it.first;
            string y=it.second;
            if(x.find(pattern[ind]) == x.end()){
                if(z.find(y) == z.end()){
                    x[pattern[ind]] = y;
                    z[y] = pattern[ind];
                }else{
                    ans=false;
                    break;
                }
            }else{
                if(x[pattern[ind]] != y){
                    ans=false;
                    break;
                }

            }
        }
        return ans;
    }
};
