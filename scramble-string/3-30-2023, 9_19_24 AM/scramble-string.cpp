// Link: https://leetcode.com/problems/scramble-string

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: scramble-string
 *  RUNTIME: 330 ms
 *  MEMORY: 35.9 MB
 *  DATE: 3-30-2023, 9:19:24 AM
 *
 */

// Solution:

class Solution {
public:
    map<string,bool> mp;
    bool isScramble(string s1, string s2) {
        int n = s1.size();
        if(s1==s2)  return true;   
        if(n==1)  return false;
        
        string k = s1+" "+s2;
        if(mp.count(k))  return mp[k];
        
        for(int i=1; i<n; i++)
        {
            bool withoutswap = (isScramble(s1.substr(0,i),s2.substr(0,i)) && 
                isScramble(s1.substr(i),s2.substr(i)));
            if(withoutswap) return true;
            
            bool withswap = (isScramble(s1.substr(0,i),s2.substr(n-i)) &&
                isScramble(s1.substr(i),s2.substr(0,n-i)));
            if(withswap)  return true;
        }
        return mp[k] = false;
    }
};
