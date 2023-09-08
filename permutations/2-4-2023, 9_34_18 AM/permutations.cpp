// Link: https://leetcode.com/problems/permutations

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: permutations
 *  RUNTIME: 0 ms
 *  MEMORY: 7.6 MB
 *  DATE: 2-4-2023, 9:34:18 AM
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
