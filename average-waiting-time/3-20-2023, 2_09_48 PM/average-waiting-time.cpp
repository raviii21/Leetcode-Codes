// Link: https://leetcode.com/problems/average-waiting-time

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: average-waiting-time
 *  RUNTIME: 211 ms
 *  MEMORY: 72.9 MB
 *  DATE: 3-20-2023, 2:09:48 PM
 *
 */

// Solution:

class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& v) {
        int curr = v[0][0] + v[0][1]; 
        int n = v.size();
        double ans = 0;
        for(int i=0; i<n; i++){
            if(i == 0){
                ans+=v[i][1];
            }
            else{
                if(curr > v[i][0]){
                    curr+=v[i][1];
                    ans+=curr-v[i][0];
                }else{
                    ans+=v[i][1];
                    curr=v[i][0]+v[i][1];
                }
            }
        } 

        double res = ans/n;
        return res;
    }
};
