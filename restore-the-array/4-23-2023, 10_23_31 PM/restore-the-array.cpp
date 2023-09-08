// Link: https://leetcode.com/problems/restore-the-array

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: restore-the-array
 *  RUNTIME: 80 ms
 *  MEMORY: 20.6 MB
 *  DATE: 4-23-2023, 10:23:31 PM
 *
 */

// Solution:

class Solution {
public:
    int mod = 1000000007;
    int solve(string& s, int& k, vector<int>&dp, int start)
    {
        if (start == s.size()) return 1;
        if (dp[start] != -1) return dp[start]; 
        long long int currNum = 0,ways = 0;
        for (int i = start; i < s.size(); i++)
        {
            int curr = s[i]-'0';
            currNum = (currNum * 10) + curr; 

            if (currNum < 1 || currNum > k) break;
            int nextWays = solve(s, k, dp, i + 1);
            ways = (ways +  nextWays) % mod;
        }
        return dp[start] = ways; 
    }
    int numberOfArrays(string s, int k) 
    {
        vector<int>dp(s.size(), -1);
        return solve(s, k, dp, 0);
    }
};
