// Link: https://leetcode.com/problems/verifying-an-alien-dictionary

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: verifying-an-alien-dictionary
 *  RUNTIME: 7 ms
 *  MEMORY: 9.7 MB
 *  DATE: 2-2-2023, 10:41:11 PM
 *
 */

// Solution:

class Solution {
public:

    bool LexicoSort(string s,string r,unordered_map<char,int> &m){

        int n=min(s.size(),r.size());
    
        for(int i=0; i<n; i++){
            if(m[s[i]] > m[r[i]]) 
             return false;
            else if(m[s[i]] < m[r[i]]) 
             return true;
        }
        if(s.size()>r.size())
           return false;
           
        return true;
    }
    bool isAlienSorted(vector<string>& words, string order) {
        unordered_map<char,int> m;

        for(int i=0; i< order.length(); i++){
            m[order[i]]= i+1;
        }
        
        for(int i=0; i<words.size()-1; i++)
            if(!LexicoSort(words[i],words[i+1],m)) 
               return false;

        return true;
    }
};
