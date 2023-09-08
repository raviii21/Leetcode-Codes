// Link: https://leetcode.com/problems/minimum-replacements-to-sort-the-array

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: minimum-replacements-to-sort-the-array
 *  RUNTIME: 90 ms
 *  MEMORY: 54.6 MB
 *  DATE: 8-30-2023, 12:01:17 PM
 *
 */

// Solution:

class Solution {
public:
    long long minimumReplacement(vector<int>& nums) {
        int n = nums.size();
        long long ans=0;

        for(int i=n-2; i>=0; i--){
            if(nums[i] > nums[i+1]){
                long long x = (nums[i]+nums[i+1]-1LL)/nums[i+1];
                ans+=x-1;
                nums[i]/=x;
            }
        }
        return ans;
    }
};
