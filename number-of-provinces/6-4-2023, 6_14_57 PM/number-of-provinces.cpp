// Link: https://leetcode.com/problems/number-of-provinces

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: number-of-provinces
 *  RUNTIME: 69 ms
 *  MEMORY: 16.5 MB
 *  DATE: 6-4-2023, 6:14:57 PM
 *
 */

// Solution:

class Solution {
public:
    int findCircleNum(vector<vector<int>>& a) {
        int n = a.size();
        vector<int> g[n];
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(a[i][j]){
                    g[i].push_back(j);
                    g[j].push_back(i);
                }
            }
        }

        int ans=0;
        vector<int> visited(n,0);
        for(int i=0; i<n; i++){
            if(visited[i]==0){
                queue<int> q;
                q.push(i);
                ans++;
                while(!q.empty()){
                    int temp = q.front();
                    q.pop();
                    visited[temp]=1;
                    for(auto it : g[temp]){
                        if(!visited[it]) q.push(it);
                    }
                }
            }
        }
        return ans;
    }
};
