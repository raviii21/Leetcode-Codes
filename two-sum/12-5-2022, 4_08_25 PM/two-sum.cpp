// Link: https://leetcode.com/problems/two-sum

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: two-sum
 *  RUNTIME: 477 ms
 *  MEMORY: 10.3 MB
 *  DATE: 12-5-2022, 4:08:25 PM
 *
 */

// Solution:

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int a=0;
        int b=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    a=i;
                    b=j;
                }
            }
        }
        return {a,b};
    }
};
