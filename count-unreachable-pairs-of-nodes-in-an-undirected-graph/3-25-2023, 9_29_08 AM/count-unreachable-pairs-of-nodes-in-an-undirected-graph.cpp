// Link: https://leetcode.com/problems/count-unreachable-pairs-of-nodes-in-an-undirected-graph

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: count-unreachable-pairs-of-nodes-in-an-undirected-graph
 *  RUNTIME: 2927 ms
 *  MEMORY: 202.5 MB
 *  DATE: 3-25-2023, 9:29:08 AM
 *
 */

// Solution:

class Solution {
public:
    void dfs(int i,vector<int>& v, vector<vector<int>>& g,long long& flag){
        v[i]=1;
        for(int it: g[i]) {
        if(v[it]==0) {
          flag++;
          dfs(it,v,g,flag);
        }

        }
    }
    long long countPairs(int n, vector<vector<int>>& edges) {
        int x = edges.size();
        if(x==0){
            long long y=n;
            long long ans = (long long) ( (y/2)*(y-1) );  
            return ans;
        }
        vector<vector<int>> g(n);
        vector<int> v(n,0);
        for(auto it : edges){
            g[it[0]].push_back(it[1]);
            g[it[1]].push_back(it[0]);
        } 
        vector<long long> vt;
        long long flag=0;
        for(int i=0; i<n; i++){
            if(v[i]==0){
                dfs(i,v,g,flag);
                vt.push_back(flag+1);
                flag=0;
            }
        }  

        long long ans = 0;
        for(int i=0; i<vt.size()-1; i++){
             for(int j=i+1; j<vt.size(); j++){
                 ans+=vt[i]*vt[j];
             } 
        //   cout << vt[i] << " ";
        }
        return ans;
    }
};
