// Link: https://leetcode.com/problems/number-of-longest-increasing-subsequence

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: number-of-longest-increasing-subsequence
 *  RUNTIME: 239 ms
 *  MEMORY: 13.1 MB
 *  DATE: 7-21-2023, 11:16:51 AM
 *
 */

// Solution:

class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n,1),count(n,1);
        
        int len=1;
        int ans=0;
        for(int i=1; i<n; i++){
            for(int j=0; j<i; j++){
                if(nums[i] > nums[j] && dp[j]+1 > dp[i]){
                    dp[i] = dp[j]+1;
                    count[i] = count[j];
                }else if(nums[i] > nums[j] && dp[j]+1 == dp[i])
                  count[i]+=count[j];

                len = max(len,dp[i]);  
            }
        }
        
        for(int i=0; i<n; i++){
            if(dp[i] == len) ans+=count[i];
        }
        return ans;
    }
};
