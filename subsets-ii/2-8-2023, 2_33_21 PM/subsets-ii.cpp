// Link: https://leetcode.com/problems/subsets-ii

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: subsets-ii
 *  RUNTIME: 6 ms
 *  MEMORY: 13.6 MB
 *  DATE: 2-8-2023, 2:33:21 PM
 *
 */

// Solution:

class Solution {
public:
     
    void subset2(int i,int n,vector<int>& nums,vector<int>& v, set<vector<int>>& s){
        if(i==n){
            sort(v.begin(),v.end());
            s.insert(v);
            return;
        }
        subset2(i+1,n,nums,v,s);
        v.push_back(nums[i]);
        subset2(i+1,n,nums,v,s);
        v.pop_back();
    } 
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n=nums.size();
        vector<int> v;
        set<vector<int>> s;
        vector<vector<int>> ans;

        sort(nums.begin(),nums.end());
        subset2(0,n,nums,v,s);

        for(auto it: s) ans.push_back(it);

        return ans;    
    }
};
