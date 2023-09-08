// Link: https://leetcode.com/problems/final-value-of-variable-after-performing-operations

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: final-value-of-variable-after-performing-operations
 *  RUNTIME: 3 ms
 *  MEMORY: 14 MB
 *  DATE: 8-25-2023, 9:59:01 PM
 *
 */

// Solution:

class Solution {
public:
    int finalValueAfterOperations(vector<string>& a) {
        int n = a.size();
        int ans=0;
        for(int i=0; i<n; ++i){
            if(a[i][1]=='+') ans++;
            else ans--;
        }
        return ans;
    }
};
