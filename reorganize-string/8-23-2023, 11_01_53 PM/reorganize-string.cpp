// Link: https://leetcode.com/problems/reorganize-string

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: reorganize-string
 *  RUNTIME: 0 ms
 *  MEMORY: 6.4 MB
 *  DATE: 8-23-2023, 11:01:53 PM
 *
 */

// Solution:

class Solution {
public:
    string reorganizeString(string s) {
        int n = s.size();
        map<char,int> m;
        for(int i=0; i<n; ++i){
            m[s[i]]++;
            if(m[s[i]] > (n+1)/2) return "";
        }
        priority_queue<pair<int,char>> q;
        for(auto it: m){
            q.push({it.second,it.first});
        }
        string ans="";
        while(q.size()>=2){
            auto it = q.top();
            q.pop();
            auto itr = q.top();
            q.pop();
            ans+=it.second;
            ans+=itr.second;
            if(it.first > 1) q.push({it.first - 1, it.second});
            if(itr.first > 1) q.push({itr.first - 1, itr.second});
        }
        if(q.size()==1) {
            auto it = q.top();
            ans+=it.second;
        }
        return ans;
        
    }
};
