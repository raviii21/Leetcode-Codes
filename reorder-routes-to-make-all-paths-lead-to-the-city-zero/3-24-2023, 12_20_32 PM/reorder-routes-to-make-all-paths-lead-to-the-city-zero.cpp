// Link: https://leetcode.com/problems/reorder-routes-to-make-all-paths-lead-to-the-city-zero

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: reorder-routes-to-make-all-paths-lead-to-the-city-zero
 *  RUNTIME: 389 ms
 *  MEMORY: 119.4 MB
 *  DATE: 3-24-2023, 12:20:32 PM
 *
 */

// Solution:

class Solution {
public:
    void dfs(int curr,int parent, vector<vector<pair<int,int>>>& g, int& ans){
        for(auto [node,flag]: g[curr]){
            if(node!=parent){
                ans+=flag;
                dfs(node,curr,g,ans);
            }
        }
    }
    int minReorder(int n, vector<vector<int>>& connections) {
        int x = connections.size();
        int ans=0;
        vector<vector<pair<int,int>>> g(n);
        for(auto it : connections){
            g[it[0]].push_back(make_pair(it[1],1));
            g[it[1]].push_back(make_pair(it[0],0));
        }  
        dfs(0,-1,g,ans);
        return ans;
    }
};
