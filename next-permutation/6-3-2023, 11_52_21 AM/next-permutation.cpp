// Link: https://leetcode.com/problems/next-permutation

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: next-permutation
 *  RUNTIME: 3 ms
 *  MEMORY: 12.1 MB
 *  DATE: 6-3-2023, 11:52:21 AM
 *
 */

// Solution:

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        next_permutation(nums.begin(),nums.end());
    }
};
