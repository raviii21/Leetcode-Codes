// Link: https://leetcode.com/problems/relative-ranks

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: relative-ranks
 *  RUNTIME: 19 ms
 *  MEMORY: 13.3 MB
 *  DATE: 3-8-2023, 3:52:59 PM
 *
 */

// Solution:

class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        vector<int> v;
        vector<string> ans;
        for(int i=0; i<n; i++)    v.push_back(score[i]);

        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());

        map<int,string> m;
        for(int i=0; i<n; i++){
            if(i==0) m[v[i]]="Gold Medal";
            else if(i==1) m[v[i]] = "Silver Medal";
            else if(i==2) m[v[i]] = "Bronze Medal";
            else{
                string s = to_string(i+1);
                m[v[i]]=s;
            }
        }

        for(int i=0; i<n; i++){
            auto it = m.find(score[i]);
            ans.push_back(it->second);
        }
        return ans;
    }
};
