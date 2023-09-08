// Link: https://leetcode.com/problems/sort-colors

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: sort-colors
 *  RUNTIME: 0 ms
 *  MEMORY: 8.2 MB
 *  DATE: 2-7-2023, 9:52:13 PM
 *
 */

// Solution:

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int red=0,white=0,blue=0;
        for(int i=0; i<n; i++){
            if(nums[i]==0) red++;
            else if(nums[i]==1) white++;
            else blue++;
        }
        for(int i=0; i<red; i++) nums[i]=0;

        for(int i=red; i<red+white; i++) nums[i]=1;

        for(int i=red+white; i<n; i++) nums[i]=2;
    }
};
