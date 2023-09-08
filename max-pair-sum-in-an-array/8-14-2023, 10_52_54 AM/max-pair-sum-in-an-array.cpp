// Link: https://leetcode.com/problems/max-pair-sum-in-an-array

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: max-pair-sum-in-an-array
 *  RUNTIME: 48 ms
 *  MEMORY: 67.6 MB
 *  DATE: 8-14-2023, 10:52:54 AM
 *
 */

// Solution:

class Solution {
public:
    int maxSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int ans = INT_MIN;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(i!=j){
                    int x=nums[i], y=nums[j];
                    int sum=x+y;
                    int m1=INT_MIN, m2=INT_MIN;
                    while(x){
                        int dig = x%10;
                        x/=10;
                        m1=max(m1,dig);
                    }
                    while(y){
                        int dig = y%10;
                        y/=10;
                        m2=max(m2,dig);
                    }
                    if(m1==m2) ans=max(ans,sum);
                }
            }
        }
        if(ans == INT_MIN) return -1;
        return ans;
    }
};
