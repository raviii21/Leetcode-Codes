// Link: https://leetcode.com/problems/equal-row-and-column-pairs

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: equal-row-and-column-pairs
 *  RUNTIME: 93 ms
 *  MEMORY: 32.6 MB
 *  DATE: 6-13-2023, 4:03:34 PM
 *
 */

// Solution:

class Solution {
public:
    int equalPairs(vector<vector<int>>& a) {
        int n = a.size();
        int ans = 0;
        map<vector<int>, int> m;
        for(int i=0; i<n; i++) m[a[i]]++;
        
        for(int i=0; i<n; i++){
            vector<int> col;
            for(int j=0; j< n; j++){
                  col.push_back(a[j][i]);
            }
            ans+=m[col];
        }
        return ans;
    }
};
