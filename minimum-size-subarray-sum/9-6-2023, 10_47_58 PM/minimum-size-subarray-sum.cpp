// Link: https://leetcode.com/problems/minimum-size-subarray-sum

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: minimum-size-subarray-sum
 *  RUNTIME: 16 ms
 *  MEMORY: 28.2 MB
 *  DATE: 9-6-2023, 10:47:58 PM
 *
 */

// Solution:

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        // 7
        // num: 2,3,1,2,4,3
        // v: 2,5,6,8,12,15
        int n = nums.size();
        int ans = INT_MAX;
        int k=0,sum=0;
        for(int i=0; i<n; ++i){
            sum+=nums[i];
            while(sum >= target){
                ans = min(ans, i+1-k);
                sum-=nums[k];
                k++;
            }
        }
        if(ans == INT_MAX) return 0;
        return ans;
    }
};
