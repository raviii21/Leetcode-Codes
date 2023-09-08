// Link: https://leetcode.com/problems/two-furthest-houses-with-different-colors

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: two-furthest-houses-with-different-colors
 *  RUNTIME: 4 ms
 *  MEMORY: 9 MB
 *  DATE: 2-10-2023, 6:43:20 PM
 *
 */

// Solution:

class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n = colors.size();
        vector<int> leftmost;
        for(int i=n-1; i>=0; i--){
            if(colors[0] != colors[i]) {
                leftmost.push_back(i);
            }
        } 
        vector<int> rightmost;
        for(int i=0; i<n; i++){
          if(colors[n-1] != colors[i]) {
               rightmost.push_back(n-i-1);
            }
        }
        int leftmostmax = INT_MIN;
        int rightmostmax = INT_MIN;
        for(int it : leftmost) 
         leftmostmax = max(leftmostmax,it);
        for(int it : rightmost) 
         rightmostmax = max(rightmostmax,it);


        int ans= max(leftmostmax,rightmostmax);
         return ans;
    }
};
