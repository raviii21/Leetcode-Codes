// Link: https://leetcode.com/problems/shuffle-the-array

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: shuffle-the-array
 *  RUNTIME: 11 ms
 *  MEMORY: 9.8 MB
 *  DATE: 2-6-2023, 9:00:08 AM
 *
 */

// Solution:

class Solution {
public:
    vector<int> shuffle(vector<int>& a, int n) {
        vector<int> ans;
        for(int i=0; i<n; i++){
            ans.push_back(a[i]);
            ans.push_back(a[n+i]);
        }
        return ans;
    }
};
