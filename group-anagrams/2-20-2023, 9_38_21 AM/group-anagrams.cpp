// Link: https://leetcode.com/problems/group-anagrams

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: group-anagrams
 *  RUNTIME: 35 ms
 *  MEMORY: 20.8 MB
 *  DATE: 2-20-2023, 9:38:21 AM
 *
 */

// Solution:

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map < string,vector<string>> m;
        for(int i=0; i<strs.size(); i++){
            string t = strs[i];
            sort(t.begin(),t.end());
            m[t].push_back(strs[i]);
        }

        for(auto it: m){
            ans.push_back(it.second);
        }
        return ans;
    }
};
