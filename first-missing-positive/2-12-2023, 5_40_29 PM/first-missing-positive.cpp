// Link: https://leetcode.com/problems/first-missing-positive

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: first-missing-positive
 *  RUNTIME: 43 ms
 *  MEMORY: 31.3 MB
 *  DATE: 2-12-2023, 5:40:29 PM
 *
 */

// Solution:

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
         for(int i=0; i<n; i++){
             if(nums[i]<=0 || nums[i]>n) continue;
             else if(nums[nums[i]-1] == nums[i]) continue;
             else {
                 swap(nums[i],nums[nums[i]-1]);
                 i-=1;
             }
         }
        
        for(int i = 0; i < n; ++ i) if(nums[i] != i + 1)  return i + 1;
        
        return n + 1;
    }
};
