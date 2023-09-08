// Link: https://leetcode.com/problems/next-permutation

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: next-permutation
 *  RUNTIME: 9 ms
 *  MEMORY: 12 MB
 *  DATE: 6-3-2023, 11:50:50 AM
 *
 */

// Solution:

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int breakInd=-1;
        for(int i=n-2;i>=0;i--){
           if(nums[i]<nums[i+1]){
               breakInd=i;
               break;
           }
        }
        if(breakInd==-1){
            reverse(nums.begin(),nums.end());
        }else{
           for(int i=n-1; i>=breakInd; i--){
               if(nums[i] > nums[breakInd]){
                swap(nums[i],nums[breakInd]);
                break;
               }
           }
           reverse(nums.begin()+breakInd+1,nums.end());
        }
    }
};
