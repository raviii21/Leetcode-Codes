// Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-transaction-fee

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: best-time-to-buy-and-sell-stock-with-transaction-fee
 *  RUNTIME: 123 ms
 *  MEMORY: 59.6 MB
 *  DATE: 6-22-2023, 10:27:05 AM
 *
 */

// Solution:

class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int n = prices.size();

        vector<int> v(n,0), t(n,0);
        t[0]=-prices[0];

        for(int i=1; i<n; i++){
            v[i]=max(v[i-1],t[i-1]+prices[i]-fee);
            t[i]=max(t[i-1], v[i-1]-prices[i]);
        }
        return v[n-1];
    }
};
