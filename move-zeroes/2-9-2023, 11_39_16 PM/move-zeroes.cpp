// Link: https://leetcode.com/problems/move-zeroes

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: move-zeroes
 *  RUNTIME: 252 ms
 *  MEMORY: 19.3 MB
 *  DATE: 2-9-2023, 11:39:16 PM
 *
 */

// Solution:

class Solution {
public:
   int nextnonzero(int in,vector<int>& nums){
       int n=nums.size();
       for(int i=in+1;i<n;i++){
         if(nums[i]!=0) return i;
       }
       return -1;
   }
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        for(int i=0; i<n; i++){
            if(nums[i]==0){
              int j = nextnonzero(i,nums);
              if(j!=-1)  swap(nums[i],nums[j]);
            }
        }
    }
};
