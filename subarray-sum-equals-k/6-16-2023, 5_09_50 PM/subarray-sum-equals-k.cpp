// Link: https://leetcode.com/problems/subarray-sum-equals-k

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: subarray-sum-equals-k
 *  RUNTIME: 144 ms
 *  MEMORY: 43.9 MB
 *  DATE: 6-16-2023, 5:09:50 PM
 *
 */

// Solution:

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int ans=0,sum=0;
        map<int,int> m;
        m[0]=1;
        for(int i=0; i<n; i++){
            sum+=nums[i];
            if(m.find(sum-k)!=m.end()) {
               ans+=m[sum-k];
            }
            int x=1;
            if(m.find(sum)!=m.end()) x+=m[sum];
            m[sum]=x;
        }
        return ans;
    }
};
