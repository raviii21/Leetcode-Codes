// Link: https://leetcode.com/problems/check-if-there-is-a-valid-partition-for-the-array

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: check-if-there-is-a-valid-partition-for-the-array
 *  RUNTIME: 132 ms
 *  MEMORY: 92.2 MB
 *  DATE: 8-13-2023, 1:46:26 PM
 *
 */

// Solution:

class Solution {
public:
    bool solution(vector<int>& nums, int ind, vector<int>& dp){
        if(ind < 0) return true;
        if(dp[ind]!=-1) return dp[ind];

        bool firstRule=false;
        bool secondRule=false;
        bool thirdRule=false;

        if(ind > 0 && nums[ind] == nums[ind-1]) firstRule = solution(nums,ind-2,dp);
        if(ind > 1 && nums[ind] == nums[ind-1] && nums[ind-1] == nums[ind-2]) 
        secondRule = solution(nums,ind-3,dp);
        if(ind > 1 && nums[ind] == nums[ind-1]+1 && nums[ind-1] == nums[ind-2]+1) 
        thirdRule = solution(nums,ind-3,dp);

        if(firstRule == false && secondRule == false && thirdRule == false) return dp[ind]=false;
        return dp[ind] = true;
    }
    bool validPartition(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n,-1);
        bool ans = solution(nums,n-1,dp);
        return ans;
    }
};
