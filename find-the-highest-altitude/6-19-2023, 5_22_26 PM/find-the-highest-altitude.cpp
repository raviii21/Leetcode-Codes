// Link: https://leetcode.com/problems/find-the-highest-altitude

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: find-the-highest-altitude
 *  RUNTIME: 0 ms
 *  MEMORY: 7.8 MB
 *  DATE: 6-19-2023, 5:22:26 PM
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
