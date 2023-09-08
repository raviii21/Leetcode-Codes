// Link: https://leetcode.com/problems/majority-element-ii

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: majority-element-ii
 *  RUNTIME: 16 ms
 *  MEMORY: 16 MB
 *  DATE: 6-6-2023, 9:28:57 PM
 *
 */

// Solution:

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        map<int,int> m;
        vector<int> ans;
        for(int i=0; i<n; i++) m[nums[i]]++;
        for(auto it : m) if(it.second > (n/3)) ans.push_back(it.first);
        return ans;
    }
};
