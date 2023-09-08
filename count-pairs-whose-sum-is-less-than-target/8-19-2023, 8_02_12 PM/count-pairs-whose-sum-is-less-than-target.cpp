// Link: https://leetcode.com/problems/count-pairs-whose-sum-is-less-than-target

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: count-pairs-whose-sum-is-less-than-target
 *  RUNTIME: 10 ms
 *  MEMORY: 20.6 MB
 *  DATE: 8-19-2023, 8:02:12 PM
 *
 */

// Solution:

class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int n = nums.size();
        int ans=0;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(nums[i]+nums[j] < target) ans++;
            }
        }
        return ans;
    }
};
