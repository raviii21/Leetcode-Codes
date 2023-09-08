// Link: https://leetcode.com/problems/product-of-array-except-self

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: product-of-array-except-self
 *  RUNTIME: 33 ms
 *  MEMORY: 23.9 MB
 *  DATE: 5-28-2023, 7:11:49 PM
 *
 */

// Solution:

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        int total = 1,n0=0;
        for(int i=0; i<n; i++) {
            total*=nums[i];
            if(nums[i]==0) n0++;
        }

        int temp=1;
        if(n0==1){
          for(int i=0; i<n; i++){
            if(nums[i]!=0) temp*=nums[i];
          }
        }
        
        for(int i=0; i<n; i++) {
            if(nums[i]==0){
                if(n0==1) ans[i]=temp;
                else ans[i]=0;
            }else ans[i] = total/nums[i];
        } 
        return ans;
    }
};
