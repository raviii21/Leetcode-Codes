// Link: https://leetcode.com/problems/jump-game

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: jump-game
 *  RUNTIME: 76 ms
 *  MEMORY: 48.3 MB
 *  DATE: 12-26-2022, 2:08:40 PM
 *
 */

// Solution:

class Solution {
public:
    bool canJump(vector<int>& nums) {
    int n=nums.size();    
    int maxJumpIndex = 0;
    
    for (int i = 0; i < n; i++)
    {
        maxJumpIndex = max(nums[i] + i, maxJumpIndex);
        if (maxJumpIndex < i + 1)
            break;
    }
    if(maxJumpIndex>=n-1) return true;
    else return false;
    }
};
