// Link: https://leetcode.com/problems/check-if-it-is-a-straight-line

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: check-if-it-is-a-straight-line
 *  RUNTIME: 16 ms
 *  MEMORY: 10 MB
 *  DATE: 6-5-2023, 7:08:15 PM
 *
 */

// Solution:

class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& a) {
        int n = a.size();
        bool ans = true;
        if(n==2) return true;
        int x = a[1][0]-a[0][0];
        int y = a[1][1]-a[0][1];

        for(int i=2; i<n; i++){
            if(x*(a[i][1]-a[0][1]) != y*(a[i][0]-a[0][0])){
                ans = false;
                break;
            }
        }
        return ans;
    }
};
