// Link: https://leetcode.com/problems/subsets

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: subsets
 *  RUNTIME: 0 ms
 *  MEMORY: 15.2 MB
 *  DATE: 2-8-2023, 1:37:31 PM
 *
 */

// Solution:

class Solution {
public:
    void subset(int i,int n,vector<int> nums,vector<int>& v,vector<vector<int>>& ans){
        if(i>=n){
            ans.push_back(v);
            return;
        }

        v.push_back(nums[i]);
        subset(i+1,n,nums,v,ans);
        v.pop_back();
        subset(i+1,n,nums,v,ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> v;
        int n=nums.size();
        subset(0,n,nums,v,ans);
        return ans;
    }
};
