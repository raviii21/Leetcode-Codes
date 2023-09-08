// Link: https://leetcode.com/problems/minimum-speed-to-arrive-on-time

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: minimum-speed-to-arrive-on-time
 *  RUNTIME: 298 ms
 *  MEMORY: 101.5 MB
 *  DATE: 7-26-2023, 1:33:44 PM
 *
 */

// Solution:

class Solution {
public: 
    int minSpeedOnTime(vector<int>& dist, double hour) {
        int n = dist.size();
        int l=1,r=1e7;
        int minSpeed = -1;
        while (l<=r) {
            int m= (l+ r) / 2;
            double time = 0.0;
            for (int i = 0 ; i < n; i++) {
                  double t = (double) dist[i] / (double) m;
                  if(i==n-1) time+=t;
                  else time+=ceil(t);
            }
            
            if (time<= hour) {
                minSpeed = m;
                r=m-1;
            } else {
                l=m+1;
            }
        }
        return minSpeed;
    }
};

