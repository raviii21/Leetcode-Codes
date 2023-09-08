// Link: https://leetcode.com/problems/maximum-subarray

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: maximum-subarray
 *  RUNTIME: 122 ms
 *  MEMORY: 67.7 MB
 *  DATE: 6-4-2023, 6:46:33 PM
 *
 */

// Solution:

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int curr=0,total=INT_MIN;
        for(int i=0; i<n; i++){
            curr+=nums[i];
            if(curr > total) total = max(total, curr);
            if(curr < 0) curr=0;
        }

        return total;
    }
};
