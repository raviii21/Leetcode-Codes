// Link: https://leetcode.com/problems/count-subarrays-with-fixed-bounds

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: count-subarrays-with-fixed-bounds
 *  RUNTIME: 126 ms
 *  MEMORY: 70.4 MB
 *  DATE: 3-4-2023, 8:25:28 PM
 *
 */

// Solution:

class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        int n = nums.size();
        long long ans = 0;
        int Leftlimit = -1, MaxPos = -1,  MinPos = -1;
        for (int i=0; i<n; i++) {
            if (nums[i] == maxK) MaxPos = i;
            if (nums[i] == minK) MinPos = i;
            if (nums[i] < minK || nums[i] > maxK) Leftlimit = i;
            int x = min(MaxPos, MinPos) - Leftlimit;
            if(x>0) ans+=x;
        }
        return ans;
    }
};
