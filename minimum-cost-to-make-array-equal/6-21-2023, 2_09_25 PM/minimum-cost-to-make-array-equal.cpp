// Link: https://leetcode.com/problems/minimum-cost-to-make-array-equal

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: minimum-cost-to-make-array-equal
 *  RUNTIME: 120 ms
 *  MEMORY: 38.4 MB
 *  DATE: 6-21-2023, 2:09:25 PM
 *
 */

// Solution:

class Solution {
public:
    long long solution(vector<int>& nums, vector<int>& cost, int x){
        int n = nums.size();
        long long ans=0;
        for(int i=0; i<n; i++)    ans+= 1L * abs(nums[i]-x)*cost[i];
        
        return ans;
    }
    long long minCost(vector<int>& nums, vector<int>& cost) {
        int n = nums.size();
        
        long long l=*min_element(nums.begin(),nums.end());
        long long h = *max_element(nums.begin(),nums.end());

        long long ans = solution(nums,cost,nums[0]);
        while(l < h){
            int m=(l+h)/2;
            long long x=solution(nums,cost,m);
            long long y=solution(nums,cost,m+1);

            ans = min(x,y);
            if(x>y) l=m+1;
            else h=m;
        }
        return ans;
    }
};
