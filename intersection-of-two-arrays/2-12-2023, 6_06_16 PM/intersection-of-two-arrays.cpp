// Link: https://leetcode.com/problems/intersection-of-two-arrays

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: intersection-of-two-arrays
 *  RUNTIME: 11 ms
 *  MEMORY: 10.2 MB
 *  DATE: 2-12-2023, 6:06:16 PM
 *
 */

// Solution:

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        set<int> s;
        for(auto i: nums1){
            for(auto j: nums2){
                if(i==j) s.insert(i);
            }
        }
        for(auto it: s) ans.push_back(it);
        return ans;
    }
};
