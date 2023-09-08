// Link: https://leetcode.com/problems/max-consecutive-ones-iii

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: max-consecutive-ones-iii
 *  RUNTIME: 71 ms
 *  MEMORY: 55.3 MB
 *  DATE: 7-26-2023, 1:48:57 PM
 *
 */

// Solution:

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
         int j=0,ans=0,n0=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1) ans=max(ans,i-j+1);
            else{
                n0++;
                if(n0<=k) ans=max(ans,i-j+1);
                else{
                    while(j<i && nums[j]!=0) j++;
                    j++;
                    n0--;
                }
            }
        }
        return ans;
    }
};
