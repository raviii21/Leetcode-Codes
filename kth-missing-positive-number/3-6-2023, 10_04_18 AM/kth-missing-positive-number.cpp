// Link: https://leetcode.com/problems/kth-missing-positive-number

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: kth-missing-positive-number
 *  RUNTIME: 3 ms
 *  MEMORY: 9.7 MB
 *  DATE: 3-6-2023, 10:04:18 AM
 *
 */

// Solution:

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        int l=0,h=n-1;
        while (l<=h) {
            int m = (l+h)/2;
            if (arr[m] - (m + 1) < k) l = m + 1;
            else h = m - 1;
        }
        return l+k;
    }
};
