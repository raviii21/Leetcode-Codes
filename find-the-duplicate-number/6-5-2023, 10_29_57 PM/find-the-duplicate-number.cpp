// Link: https://leetcode.com/problems/find-the-duplicate-number

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: find-the-duplicate-number
 *  RUNTIME: 167 ms
 *  MEMORY: 61.2 MB
 *  DATE: 6-5-2023, 10:29:57 PM
 *
 */

// Solution:

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0; i<n-1; i++){
            if(nums[i] == nums[i+1]) return nums[i];
        }
        return -1;
    }
};
