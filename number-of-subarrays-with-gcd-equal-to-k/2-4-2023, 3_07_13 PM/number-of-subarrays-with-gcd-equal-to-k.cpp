// Link: https://leetcode.com/problems/number-of-subarrays-with-gcd-equal-to-k

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: number-of-subarrays-with-gcd-equal-to-k
 *  RUNTIME: 34 ms
 *  MEMORY: 9 MB
 *  DATE: 2-4-2023, 3:07:13 PM
 *
 */

// Solution:

class Solution {
public:
    int subarrayGCD(vector<int>& nums, int k) {
        int n=nums.size();
        int ans=0;
        for(int i=0; i<n; i++){
            int gcd=nums[i];
            if(gcd==k) 
             ans++; 

            for(int j=i+1; j<n; j++){
              gcd=__gcd(gcd,nums[j]);
              if(gcd==k)
               ans++;
            } 
        }
        return ans;
    }
};
