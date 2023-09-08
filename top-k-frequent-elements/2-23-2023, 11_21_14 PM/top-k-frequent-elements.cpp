// Link: https://leetcode.com/problems/top-k-frequent-elements

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: top-k-frequent-elements
 *  RUNTIME: 20 ms
 *  MEMORY: 13.9 MB
 *  DATE: 2-23-2023, 11:21:14 PM
 *
 */

// Solution:

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> ans;
        vector<pair<int,int>> v;
        map<int,int> m;
        for(int i=0; i<n; i++){
          m[nums[i]]++;
        }
       for(auto it: m){
           v.push_back(make_pair(it.second,it.first));
       }

       sort(v.begin(),v.end());
       reverse(v.begin(),v.end());
       int i=0;
       while(k--){
           ans.push_back(v[i++].second);
       }

       return ans;
    }
};
