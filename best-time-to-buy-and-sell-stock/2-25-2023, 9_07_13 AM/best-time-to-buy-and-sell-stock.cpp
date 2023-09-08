// Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: best-time-to-buy-and-sell-stock
 *  RUNTIME: 140 ms
 *  MEMORY: 97.3 MB
 *  DATE: 2-25-2023, 9:07:13 AM
 *
 */

// Solution:

class Solution {
public:
    int maxProfit(vector<int>& p) {
        int n=p.size();
        vector<int> a(n,0);
        a[n-1]=p[n-1];
        for(int i=n-2; i>=0; i--){
            a[i]=max(p[i],a[i+1]);
        }
        
        int profit=0;
        for(int i=0; i<n; i++){
             profit=max(profit,a[i]-p[i]);
        }
        return profit;
    }
};
