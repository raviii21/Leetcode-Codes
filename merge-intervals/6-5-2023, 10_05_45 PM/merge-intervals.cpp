// Link: https://leetcode.com/problems/merge-intervals

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: merge-intervals
 *  RUNTIME: 39 ms
 *  MEMORY: 20 MB
 *  DATE: 6-5-2023, 10:05:45 PM
 *
 */

// Solution:

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& a) {
        int n = a.size();
        sort(a.begin(),a.end());
        vector<vector<int>> ans;
        for(int i=0; i<n; i++){
          if(ans.empty() || ans.back()[1] < a[i][0]){
              vector<int> temp;
              temp.push_back(a[i][0]);
              temp.push_back(a[i][1]);
              ans.push_back(temp);
          }else{
              ans.back()[1]=max(ans.back()[1],a[i][1]);
          }
        }
        return ans;
    }
};
