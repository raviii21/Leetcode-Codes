// Link: https://leetcode.com/problems/find-the-smallest-divisor-given-a-threshold

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: find-the-smallest-divisor-given-a-threshold
 *  RUNTIME: 50 ms
 *  MEMORY: 22.2 MB
 *  DATE: 6-10-2023, 9:47:55 PM
 *
 */

// Solution:

class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        int l=1,h=*max_element(nums.begin(),nums.end());
        int ans= -1;
        while(l<=h){
            int m = (l+h)/2;
            int x=0;
            for(int i=0; i<n; i++){
                x+=ceil((nums[i]*1.0)/m);
            }
            if(x<=threshold){
                ans=m;
                h=m-1;
            }else l=m+1;
        }
        return ans;
    }
};
