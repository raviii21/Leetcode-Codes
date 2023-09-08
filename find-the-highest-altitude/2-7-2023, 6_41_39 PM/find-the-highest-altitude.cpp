// Link: https://leetcode.com/problems/find-the-highest-altitude

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: find-the-highest-altitude
 *  RUNTIME: 0 ms
 *  MEMORY: 8 MB
 *  DATE: 2-7-2023, 6:41:39 PM
 *
 */

// Solution:

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        int ans=0;
        int sum=0;
        for(int i=0; i<n; i++){
          sum+=gain[i];
          ans=max(ans,sum);
        }
        return ans;
    }
};
