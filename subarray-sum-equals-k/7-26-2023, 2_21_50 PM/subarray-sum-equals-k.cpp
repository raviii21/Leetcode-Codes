// Link: https://leetcode.com/problems/subarray-sum-equals-k

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: subarray-sum-equals-k
 *  RUNTIME: 161 ms
 *  MEMORY: 50 MB
 *  DATE: 7-26-2023, 2:21:50 PM
 *
 */

// Solution:

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int ans=0,sum=0;
        map<int,int> m;
        m[0]=1;
        for(int i=0; i<n; i++){
            sum+=nums[i];
            ans+=m[sum-k];
            m[sum]+=1;
        }
        return ans;
    }
};
