// Link: https://leetcode.com/problems/k-radius-subarray-averages

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: k-radius-subarray-averages
 *  RUNTIME: 262 ms
 *  MEMORY: 137.1 MB
 *  DATE: 6-20-2023, 10:50:44 AM
 *
 */

// Solution:

class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans(n,-1);

        if(k==0) return nums;
        if(2*k+1 > n) return ans;
        
        vector<long long> prefix(n+1);
        for(int i=0; i<n; i++){
            prefix[i+1]=nums[i]+prefix[i];
        }

          
          for(int i=k; i<(n-k); i++){
              int left = i-k;
              int right = i+k;
              
              long long subsum = prefix[right+1]-prefix[left];
              int avg = subsum/(2*k+1);
              ans[i]=avg;
          }


        return ans;
    }
};
