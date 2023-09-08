// Link: https://leetcode.com/problems/find-the-duplicate-number

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: find-the-duplicate-number
 *  RUNTIME: 107 ms
 *  MEMORY: 61.2 MB
 *  DATE: 6-5-2023, 10:31:18 PM
 *
 */

// Solution:

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       while(nums[0] != nums[nums[0]]) {
           swap(nums[0],nums[nums[0]]);
       }
       return nums[0];
    }
};
