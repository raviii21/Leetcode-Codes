// Link: https://leetcode.com/problems/rotate-array

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: rotate-array
 *  RUNTIME: 39 ms
 *  MEMORY: 25.6 MB
 *  DATE: 5-22-2023, 11:23:51 AM
 *
 */

// Solution:

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> v(n);
        for(int i=0; i<n; i++)    v[(i+k)%n] = nums[i];
        nums=v;
    }
};
