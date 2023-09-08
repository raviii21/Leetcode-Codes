// Link: https://leetcode.com/problems/peak-index-in-a-mountain-array

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: peak-index-in-a-mountain-array
 *  RUNTIME: 131 ms
 *  MEMORY: 59.6 MB
 *  DATE: 7-25-2023, 9:34:43 AM
 *
 */

// Solution:

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        return std::distance(arr.begin(),std::max_element(arr.begin(),arr.end()));
    }
};
