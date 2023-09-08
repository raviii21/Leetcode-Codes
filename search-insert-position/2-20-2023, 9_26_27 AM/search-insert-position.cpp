// Link: https://leetcode.com/problems/search-insert-position

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: search-insert-position
 *  RUNTIME: 3 ms
 *  MEMORY: 9.5 MB
 *  DATE: 2-20-2023, 9:26:27 AM
 *
 */

// Solution:

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int l=0,h=n-1; 
        while(l<=h){
            int m=(l+h)/2;
            if(target == nums[m]) return m;
            else if(nums[m] > target) h=m-1;
            else  l=m+1;
        }
        return h+1;
    }
};
