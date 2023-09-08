// Link: https://leetcode.com/problems/number-of-operations-to-make-network-connected

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: number-of-operations-to-make-network-connected
 *  RUNTIME: 157 ms
 *  MEMORY: 56.5 MB
 *  DATE: 3-23-2023, 9:43:07 AM
 *
 */

// Solution:

class Solution {
public: 
    void dfs(int i,vector<int>& v, vector<vector<int>>& g){
        v[i]=1;
        for(int it: g[i]) if(v[it]==0) dfs(it,v,g);
    }
    int makeConnected(int n, vector<vector<int>>& connections) {
        int x = connections.size();
        int ans=0;
        if(x < n-1){
            ans=-1;
            return ans;
        }
        vector<vector<int>> g(n);
        vector<int> v(n,0);
        for(auto it : connections){
            g[it[0]].push_back(it[1]);
            g[it[1]].push_back(it[0]);
        } 
        for(int i=0; i<n; i++){
            if(v[i]==0){
                ans++;
                dfs(i,v,g);
            }
        } 
        return ans-1;
    }
};
