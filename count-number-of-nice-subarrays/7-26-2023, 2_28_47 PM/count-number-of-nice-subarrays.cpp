// Link: https://leetcode.com/problems/count-number-of-nice-subarrays

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: count-number-of-nice-subarrays
 *  RUNTIME: 302 ms
 *  MEMORY: 102.3 MB
 *  DATE: 7-26-2023, 2:28:47 PM
 *
 */

// Solution:

class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        for(int i=0; i<n; i++){
            if(nums[i]%2==0) nums[i]=0;
            else nums[i]=1;
        }
        int sum=0,ans=0;
        unordered_map<int,int> m;
        m[0]=1;
        for(int i=0; i<n; i++){
            sum+=nums[i];
            ans+=m[sum-k];
            m[sum]++;
        }
        return ans;
    }
};
