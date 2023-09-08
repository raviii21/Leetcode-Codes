// Link: https://leetcode.com/problems/minimum-score-of-a-path-between-two-cities

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: minimum-score-of-a-path-between-two-cities
 *  RUNTIME: 492 ms
 *  MEMORY: 137.9 MB
 *  DATE: 3-22-2023, 10:31:50 PM
 *
 */

// Solution:

class Solution {
public:
    int minScore(int n, vector<vector<int>>& roads) {
        vector<vector<pair<int,int> > > g(n+1); 

        for(auto it : roads){
            g[it[0]].push_back(make_pair(it[1],it[2]));
            g[it[1]].push_back(make_pair(it[0],it[2]));
        }

        int ans = INT_MAX;
        vector<int> v(n+1,0);
        queue<int> q;
        q.push(1);
        v[1]=1;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            for(auto& [x,dist]: g[node]){
                ans=min(ans,dist);
                if(v[x]==0){
                    v[x]=1;
                    q.push(x);
                }
            }
        }
        return ans;
    }
};
