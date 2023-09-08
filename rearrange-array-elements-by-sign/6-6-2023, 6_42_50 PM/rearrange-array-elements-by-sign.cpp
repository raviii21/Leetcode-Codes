// Link: https://leetcode.com/problems/rearrange-array-elements-by-sign

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: rearrange-array-elements-by-sign
 *  RUNTIME: 228 ms
 *  MEMORY: 134.4 MB
 *  DATE: 6-6-2023, 6:42:50 PM
 *
 */

// Solution:

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int x = nums.size();
        vector<int> p,n;
        for(int i=0; i<x; i++){
            if(nums[i] >= 0) p.push_back(nums[i]);
            else n.push_back(nums[i]);
        }
        int m = p.size();
        int j=0;
        for(int i=0; i<m; i++){
            nums[j++]=p[i];
            nums[j++]=n[i];
        }
        return nums;
    }
};
