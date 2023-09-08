// Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: remove-duplicates-from-sorted-array
 *  RUNTIME: 9 ms
 *  MEMORY: 18.5 MB
 *  DATE: 12-5-2022, 4:18:37 PM
 *
 */

// Solution:

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int c=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1]){
                nums[c++]=nums[i];
            }
        }
        return c;
    }
};
