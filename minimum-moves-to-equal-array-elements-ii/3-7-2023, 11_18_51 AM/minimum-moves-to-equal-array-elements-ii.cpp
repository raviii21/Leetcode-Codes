// Link: https://leetcode.com/problems/minimum-moves-to-equal-array-elements-ii

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: minimum-moves-to-equal-array-elements-ii
 *  RUNTIME: 15 ms
 *  MEMORY: 11.8 MB
 *  DATE: 3-7-2023, 11:18:51 AM
 *
 */

// Solution:

class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int x;
        if(n%2==0) x=nums[(n/2)-1];
        else x = nums[n/2];
        int ans=0;
        for(int i: nums){
            int diff = abs(x-i);
            ans+=diff;
        }
        return ans;
    }
};  


// class Solution {
// public:
//     int minMoves2(vector<int>& nums) {
//         vector<int> a = nums;
//         sort(a.begin(),a.end());
//         int ab = a[a.size()%2==0?(a.size()/2)-1:a.size()/2];
//         int ans = 0;
//         for(auto i:nums) ans+=abs(i-ab);
//         return ans;
//     }
// };
