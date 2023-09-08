// Link: https://leetcode.com/problems/minimum-moves-to-equal-array-elements

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: minimum-moves-to-equal-array-elements
 *  RUNTIME: 46 ms
 *  MEMORY: 28.3 MB
 *  DATE: 3-18-2023, 2:56:56 PM
 *
 */

// Solution:

class Solution {
public:
    int minMoves(vector<int>& nums) {
        int ans=0;
        int mini = INT_MAX;
        for(int it: nums) mini=min(it,mini);
        for(int it : nums) ans+=it-mini;
        return ans;
    }
};
