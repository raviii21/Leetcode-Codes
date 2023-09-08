// Link: https://leetcode.com/problems/number-of-zero-filled-subarrays

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: number-of-zero-filled-subarrays
 *  RUNTIME: 172 ms
 *  MEMORY: 110.1 MB
 *  DATE: 3-21-2023, 8:54:49 AM
 *
 */

// Solution:

class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        int n = nums.size();
        long long flag=0;
        vector<long long> v;
        long long ans=0;
        for(int i=0; i<n; i++){
            if(nums[i]==0){
                ans++;
                flag++;
            }else{
                if(flag) v.push_back(flag);
                flag=0;
            }
        }
        if(nums[n-1]==0) v.push_back(flag);
        for(int i=0; i<v.size(); i++){
            long long int x = (v[i]*(v[i]-1))/2;
            ans+=x;
        }
        return ans;
    }
};
