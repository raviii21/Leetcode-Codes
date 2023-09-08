// Link: https://leetcode.com/problems/minimum-number-of-taps-to-open-to-water-a-garden

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: minimum-number-of-taps-to-open-to-water-a-garden
 *  RUNTIME: 50 ms
 *  MEMORY: 14.1 MB
 *  DATE: 8-31-2023, 10:02:21 AM
 *
 */

// Solution:

class Solution {
public:
    int minTaps(int n, vector<int>& ranges) {
        int m = ranges.size();
        int min=0,max=0,ans=0;

        while(max<n){
            for(int i=0; i<=n; i++){
                if(i-ranges[i]<=min && i+ranges[i]>max){
                    max = i+ranges[i];
                }
            }
            if(min == max) return -1;
            ans++;
            min=max;
        }
        return ans;
    }
};
