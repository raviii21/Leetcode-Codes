// Link: https://leetcode.com/problems/binary-search

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: binary-search
 *  RUNTIME: 35 ms
 *  MEMORY: 27.5 MB
 *  DATE: 4-1-2023, 9:06:09 AM
 *
 */

// Solution:

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int l=0,h=n-1;

        while(l<=h){
            int m = (l+h)/2;
            if(target == nums[m]) return m;
            else if(target > nums[m]) l=m+1;
            else h=m-1;
        }
        return -1;
    }
};
