// Link: https://leetcode.com/problems/find-all-duplicates-in-an-array

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: find-all-duplicates-in-an-array
 *  RUNTIME: 151 ms
 *  MEMORY: 46.7 MB
 *  DATE: 3-3-2023, 11:04:06 AM
 *
 */

// Solution:

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map<int,int> m;
        vector<int> ans;
        int n=nums.size();
        for(auto it: nums)  m[it]++;
        for(auto it: m) if(it.second == 2) ans.push_back(it.first); 
        return ans;
    }
};
