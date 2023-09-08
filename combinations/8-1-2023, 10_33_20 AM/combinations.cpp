// Link: https://leetcode.com/problems/combinations

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: combinations
 *  RUNTIME: 400 ms
 *  MEMORY: 164.2 MB
 *  DATE: 8-1-2023, 10:33:20 AM
 *
 */

// Solution:

class Solution {
public:
    void solution(int start,int end, int k, vector<int> v, vector<vector<int>>& ans){
        if(v.size()==k){
            ans.push_back(v);
            return;
        }
        for(int i=start; i<=end; i++){
            v.push_back(i);
            solution(i+1,end,k,v,ans);
            v.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> v;
        solution(1,n,k,v,ans);
        return ans;
    }
};
