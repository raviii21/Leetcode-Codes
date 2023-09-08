// Link: https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: find-first-and-last-position-of-element-in-sorted-array
 *  RUNTIME: 7 ms
 *  MEMORY: 13.7 MB
 *  DATE: 2-13-2023, 11:18:20 PM
 *
 */

// Solution:

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans(2,-1);
        int n= nums.size();
        for(int i=0; i<n; i++){
          if(nums[i]==target){
              ans[0]=i;
              break;
          }
        }
        for(int i=n-1; i>=0; i--){
            if(nums[i]==target){
                ans[1]=i;
                break;
            }
        }

        return ans;
    }
};
