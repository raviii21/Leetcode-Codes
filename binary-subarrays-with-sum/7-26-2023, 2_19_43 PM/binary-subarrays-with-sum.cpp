// Link: https://leetcode.com/problems/binary-subarrays-with-sum

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: binary-subarrays-with-sum
 *  RUNTIME: 100 ms
 *  MEMORY: 37.9 MB
 *  DATE: 7-26-2023, 2:19:43 PM
 *
 */

// Solution:

class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n = nums.size();
        int ans=0,sum=0;
        map<int,int> m;
        m[0]=1;
        for(int i=0; i<n; i++){
            sum+=nums[i];
            ans+=m[sum-goal];
            m[sum]+=1;
        }
        return ans;
    }
};
