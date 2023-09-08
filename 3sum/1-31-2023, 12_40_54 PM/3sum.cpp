// Link: https://leetcode.com/problems/3sum

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: 3sum
 *  RUNTIME: 307 ms
 *  MEMORY: 29.8 MB
 *  DATE: 1-31-2023, 12:40:54 PM
 *
 */

// Solution:

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
         
        vector< vector<int> >  ans;
        for(int i=0; i< n-2; i++){
         
         if(i==0 || (nums[i]!=nums[i-1])){
             int low=i+1,high=n-1;
             while(low  < high){
                 if(nums[low]+nums[high]+nums[i]==0){
                     vector<int> v;
                     v.push_back(nums[i]);
                     v.push_back(nums[low]);
                     v.push_back(nums[high]);
                     ans.push_back(v);

                     while(low < high && nums[low]==nums[low+1])
                      low++;
                     while(low < high && nums[high]==nums[high-1])
                      high--; 

                      low++;
                      high--;
                 }
                 else if(nums[low]+nums[high] > (-1 * nums[i])) high--;
                 else low++;
             }
         }


        }
        return ans;
    }
};
