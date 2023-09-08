// Link: https://leetcode.com/problems/find-peak-element

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: find-peak-element
 *  RUNTIME: 9 ms
 *  MEMORY: 8.9 MB
 *  DATE: 6-7-2023, 10:06:44 PM
 *
 */

// Solution:

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int l=0,h=n-1;
        while(l<h){
            int m = (l+h)/2;
            if(m==0){
                if(nums[0] > nums[1]) return m;
                l=m+1;
            }else if(m==(n-1)){
                if(nums[n-1] > nums[n-2]) return m;
                h=m+1;
            }else if(nums[m] > nums[m+1] && nums[m]> nums[m-1]) return m;
            else if(nums[m] > nums[m+1]) h=m-1;
            else l=m+1;
        }
        return l;
    }
};
