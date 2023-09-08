// Link: https://leetcode.com/problems/single-number

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: single-number
 *  RUNTIME: 34 ms
 *  MEMORY: 20 MB
 *  DATE: 6-16-2023, 4:45:20 PM
 *
 */

// Solution:

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        int ans;
        unordered_map<int,int> m;
        for(int i=0; i<n; i++){
            m[nums[i]]++;
        }
        for(auto it: m) if(it.second == 1) ans=it.first;
        return ans;
    }
};
