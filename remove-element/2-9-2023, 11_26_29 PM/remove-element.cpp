// Link: https://leetcode.com/problems/remove-element

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: remove-element
 *  RUNTIME: 3 ms
 *  MEMORY: 8.9 MB
 *  DATE: 2-9-2023, 11:26:29 PM
 *
 */

// Solution:

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        int ans=0;
        int i=0,j=n-1;
        while(i<=j){
            if(nums[i]==val){
                swap(nums[i],nums[j]);
                j--;
                ans++;
            }else i++;
        }
        return n-ans;
    }
};
