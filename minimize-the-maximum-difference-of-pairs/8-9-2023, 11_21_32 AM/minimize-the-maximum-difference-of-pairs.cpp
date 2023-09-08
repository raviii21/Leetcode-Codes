// Link: https://leetcode.com/problems/minimize-the-maximum-difference-of-pairs

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: minimize-the-maximum-difference-of-pairs
 *  RUNTIME: 122 ms
 *  MEMORY: 81.1 MB
 *  DATE: 8-9-2023, 11:21:32 AM
 *
 */

// Solution:

class Solution {
public:
    int minimizeMax(vector<int>& nums, int p) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int l=0,h=nums[n-1]-nums[0];
        while(l<h){
            int m=(l+h)/2;
            int i=0,count=0;
            while(i<n-1){
                if(nums[i+1]-nums[i] <= m){
                    count++;
                    i++;
                }
                i++;
            }
            if(count>=p) h=m;
            else l=m+1;
        }
        return l;
    }
};
