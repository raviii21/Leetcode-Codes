// Link: https://leetcode.com/problems/single-element-in-a-sorted-array

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: single-element-in-a-sorted-array
 *  RUNTIME: 28 ms
 *  MEMORY: 22.3 MB
 *  DATE: 2-21-2023, 12:09:39 PM
 *
 */

// Solution:

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int low= 0;
        int high=n-1;
        int ans=-1;
        while(low <= high){
            int mid = (low+high)/2;
            if(mid %2 == 1){ 
                if(mid == low) {
                    ans = nums[mid];
                    break;
                }
                if(nums[mid] == nums[mid-1]){
                    low = mid+1;
                }
                else if(nums[mid] == nums[mid+1]){
                    high = mid-1;
                }else{
                    ans = nums[mid];
                    break;
                }
            }else{ 
                if(mid == low) {
                    ans = nums[mid];
                    break;
                }
                if(nums[mid] == nums[mid-1]){
                    high = mid-2;
                }
                else if(nums[mid] == nums[mid+1]){
                    low = mid+2;
                }else{
                    ans = nums[mid];
                    break;
                }
            } 

            
        }
        return ans;
    }
};
