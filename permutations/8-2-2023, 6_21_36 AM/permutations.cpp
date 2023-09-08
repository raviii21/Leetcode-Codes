// Link: https://leetcode.com/problems/permutations

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: permutations
 *  RUNTIME: 5 ms
 *  MEMORY: 7.4 MB
 *  DATE: 8-2-2023, 6:21:36 AM
 *
 */

// Solution:

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());

        do{
            ans.push_back(nums);
        }while(next_permutation(nums.begin(),nums.end()));
       
        return ans;
    }
};
