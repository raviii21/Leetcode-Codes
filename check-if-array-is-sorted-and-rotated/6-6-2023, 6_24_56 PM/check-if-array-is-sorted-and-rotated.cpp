// Link: https://leetcode.com/problems/check-if-array-is-sorted-and-rotated

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: check-if-array-is-sorted-and-rotated
 *  RUNTIME: 0 ms
 *  MEMORY: 8.5 MB
 *  DATE: 6-6-2023, 6:24:56 PM
 *
 */

// Solution:

class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int a=0;
        for(int i=0; i<n-1; i++){
            if(nums[i] > nums[i+1]) a++;
        }
        if(nums[n-1] > nums[0]) a++;
        if(a <= 1) return true;
        else return false;
    }
};
