// Link: https://leetcode.com/problems/minimize-maximum-of-array

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: minimize-maximum-of-array
 *  RUNTIME: 120 ms
 *  MEMORY: 71.3 MB
 *  DATE: 4-5-2023, 10:11:33 PM
 *
 */

// Solution:

class Solution {
public:
    int minimizeArrayValue(vector<int>& nums) {
        int n = nums.size();
        long long int sum=0;
        long long int ans=0;
        for(int i=0; i<n; i++){
            sum+=nums[i];
            ans=max(ans, (sum+i)/(i+1));
        }
        return ans;
    }
};
