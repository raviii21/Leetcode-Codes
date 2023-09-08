// Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: best-time-to-buy-and-sell-stock-ii
 *  RUNTIME: 7 ms
 *  MEMORY: 13 MB
 *  DATE: 12-19-2022, 10:57:58 PM
 *
 */

// Solution:

class Solution {
public:
    int maxProfit(vector<int>& a) {
        int profit=0;
        for(int i=1; i<a.size(); i++)
           if(a[i]>a[i-1]) profit+=a[i]-a[i-1];
           
        return profit;
    }
};
