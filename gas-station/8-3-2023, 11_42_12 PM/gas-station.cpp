// Link: https://leetcode.com/problems/gas-station

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: gas-station
 *  RUNTIME: 119 ms
 *  MEMORY: 128.1 MB
 *  DATE: 8-3-2023, 11:42:12 PM
 *
 */

// Solution:

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size();
        int totalGas=0,totalCost=0;
        for(int i=0; i<n; i++){
            totalGas+=gas[i];
            totalCost+=cost[i];
        }
        if(totalCost > totalGas) return -1;

        int ans=0,curr=0;
        for(int i=0; i<n; i++){
            curr+=gas[i]-cost[i];
            if(curr<0) {
                ans=i+1;
                curr=0;
            }
        }
        return ans%n;
    }
};
