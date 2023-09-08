// Link: https://leetcode.com/problems/can-make-arithmetic-progression-from-sequence

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: can-make-arithmetic-progression-from-sequence
 *  RUNTIME: 7 ms
 *  MEMORY: 9.4 MB
 *  DATE: 6-6-2023, 4:44:10 PM
 *
 */

// Solution:

class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(),arr.end());
        unordered_set<int> s;
        bool ans = true;
        for(int i=0; i<n-1; i++){
            s.insert(arr[i+1]-arr[i]);
        }
        if(s.size() > 1) ans = false;
        return ans;
    }
};
