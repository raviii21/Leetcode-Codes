// Link: https://leetcode.com/problems/minimum-time-to-complete-trips

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: minimum-time-to-complete-trips
 *  RUNTIME: 400 ms
 *  MEMORY: 94.4 MB
 *  DATE: 3-7-2023, 10:06:13 AM
 *
 */

// Solution:

class Solution {
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
        int n = time.size();
        long long l=0,h=1LL * *max_element(time.begin(),time.end()) * totalTrips;
        while(l<h){
            long long m=(l+h)/2;
            long long currentTrip=0;
            for(int i=0; i<n; i++)    currentTrip+=m/time[i];
            if(currentTrip >= totalTrips) h=m;
            else l=m+1; 
        }
        return l;
    }
};
