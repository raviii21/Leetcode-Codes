// Link: https://leetcode.com/problems/maximal-network-rank

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: maximal-network-rank
 *  RUNTIME: 62 ms
 *  MEMORY: 33 MB
 *  DATE: 8-18-2023, 10:52:28 AM
 *
 */

// Solution:

class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        vector<int> v(n);
        vector<vector<int>> graph (n,vector<int>(n,0));
        for(auto it: roads){
            v[it[0]]++;
            v[it[1]]++;
            graph[it[0]][it[1]] = 1;
            graph[it[1]][it[0]] = 1;
        }

        int ans=0;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                ans=max(ans,v[i]+v[j]-graph[i][j]);
            }
        }
        return ans;
    }
};
