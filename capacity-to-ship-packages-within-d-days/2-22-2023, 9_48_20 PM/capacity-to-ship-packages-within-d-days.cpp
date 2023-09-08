// Link: https://leetcode.com/problems/capacity-to-ship-packages-within-d-days

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: capacity-to-ship-packages-within-d-days
 *  RUNTIME: 65 ms
 *  MEMORY: 26.1 MB
 *  DATE: 2-22-2023, 9:48:20 PM
 *
 */

// Solution:

class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        int low=-1,high=0;
        for(int i=0; i<n; i++){
            low=max(low,weights[i]);
            high+=weights[i];
        }

        while(low < high){
            int mid = (low+high)/2;
            int currentWeight=0,currentDay=1;
            for(int i=0; i<n; i++){
                if(currentWeight+weights[i] > mid){
                    currentDay++;
                    currentWeight=0;
                }
                currentWeight+=weights[i];
            }

            if(currentDay > days){
                low=mid+1;
            }else high=mid;
        }
        return low;
    }
};
