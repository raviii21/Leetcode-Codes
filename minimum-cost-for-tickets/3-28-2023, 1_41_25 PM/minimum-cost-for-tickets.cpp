// Link: https://leetcode.com/problems/minimum-cost-for-tickets

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: minimum-cost-for-tickets
 *  RUNTIME: 4 ms
 *  MEMORY: 9.7 MB
 *  DATE: 3-28-2023, 1:41:25 PM
 *
 */

// Solution:

class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        int n = days.size();
        
        vector<int> dp(n+1,INT_MAX);
        dp[n]=0;
        for(int i=n-1; i>=0; i--){
            dp[i]= costs[0]+dp[i+1];

            int c7=i,c30=i;
            while(c7 < n && days[c7] < days[i]+7){
                c7++;
            }
            while(c30 < n && days[c30] < days[i]+30){
                c30++;
            }

            dp[i]=min(dp[i],min(costs[1]+dp[c7], costs[2]+dp[c30]));
        }
        return dp[0];
    }
};
