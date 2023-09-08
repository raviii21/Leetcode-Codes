// Link: https://leetcode.com/problems/permutation-in-string

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: permutation-in-string
 *  RUNTIME: 2128 ms
 *  MEMORY: 93.3 MB
 *  DATE: 2-4-2023, 9:17:56 AM
 *
 */

// Solution:

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int x=s1.size();
        int y=s2.size();

        map<char,int> m,p;
        for(int i=0; i<x; i++)
            m[s1[i]]++;
        
        for(int i=0; i<=(y-x); i++){
            for(int j=i; j<i+x; j++)
                p[s2[j]]++;
            
            if(m==p) {
                return true;
            }
            p.clear();
        }
        return false;
    }
};
