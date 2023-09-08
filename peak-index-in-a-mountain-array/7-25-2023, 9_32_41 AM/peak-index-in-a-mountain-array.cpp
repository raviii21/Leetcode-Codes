// Link: https://leetcode.com/problems/peak-index-in-a-mountain-array

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: peak-index-in-a-mountain-array
 *  RUNTIME: 118 ms
 *  MEMORY: 59.7 MB
 *  DATE: 7-25-2023, 9:32:41 AM
 *
 */

// Solution:

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int ans = std::distance(arr.begin(),std::max_element(arr.begin(),arr.end()));
        return ans;
    }
};
