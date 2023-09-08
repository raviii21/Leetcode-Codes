// Link: https://leetcode.com/problems/first-unique-character-in-a-string

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: first-unique-character-in-a-string
 *  RUNTIME: 57 ms
 *  MEMORY: 11 MB
 *  DATE: 3-8-2023, 4:10:46 PM
 *
 */

// Solution:

class Solution {
public:
    int firstUniqChar(string s) {
        int n = s.size();
        int ans=-1;
        map<char,int> m;
        for(int i=0; i<n; i++) m[s[i]]++;
        vector<char> v;
        for(auto it: m)if(it.second==1)v.push_back(it.first);
        for(int i=0; i<n; i++){
            auto it = find(v.begin(),v.end(),s[i]);
            if(it!=v.end()){
              ans=i;
              break;
            }
        }
        return ans;
    }
};
