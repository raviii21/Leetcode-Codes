// Link: https://leetcode.com/problems/sort-characters-by-frequency

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: sort-characters-by-frequency
 *  RUNTIME: 12 ms
 *  MEMORY: 8.4 MB
 *  DATE: 2-26-2023, 6:43:23 PM
 *
 */

// Solution:

class Solution {
public:
    string frequencySort(string s) {
        string ans;
        vector<pair<int,char>> v;
        map<char,int> m;

        for(int i=0; i<s.size(); i++){
            m[s[i]]++;
        }

        for(auto it: m){
            v.push_back(make_pair(it.second,it.first));
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        for(int i=0; i<v.size(); i++){
             int x = v[i].first;
             char ch = v[i].second;
             while(x--)ans+=ch; 
        }

        return ans;
    }
};
