// Link: https://leetcode.com/problems/find-all-anagrams-in-a-string

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: find-all-anagrams-in-a-string
 *  RUNTIME: 12 ms
 *  MEMORY: 8.5 MB
 *  DATE: 2-5-2023, 9:51:54 AM
 *
 */

// Solution:

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        int x=s.size();
        int y=p.size();   
         
        vector<int> m(26,0),m1(26,0); 

        if(y > x) return ans;
        for(int i=0; i<y; i++){
            m[p[i] - 'a']++;
            m1[s[i] - 'a']++;
        }
        if(m==m1) ans.push_back(0);
        for(int i=y; i<x; i++){
           m1[s[i-y] - 'a']--;
           m1[s[i] - 'a']++;

           if(m==m1) ans.push_back(i-y+1);
        }
        return ans;
    }
};
