// Link: https://leetcode.com/problems/max-consecutive-ones

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: max-consecutive-ones
 *  RUNTIME: 49 ms
 *  MEMORY: 36.1 MB
 *  DATE: 6-16-2023, 4:40:49 PM
 *
 */

// Solution:

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int ans=INT_MIN;
        int count=0;
        for(int i=0; i<n; i++){
           if(nums[i]==1) count++;
           else{
               ans=max(ans,count);
               count=0;
           }
        }
        if(nums[n-1]==1) ans=max(ans,count);
        return ans;
    }
};
