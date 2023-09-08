// Link: https://leetcode.com/problems/longest-cycle-in-a-graph

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: longest-cycle-in-a-graph
 *  RUNTIME: 154 ms
 *  MEMORY: 90.2 MB
 *  DATE: 3-26-2023, 10:28:06 AM
 *
 */

// Solution:

class Solution {
public: 
    int longestCycle(vector<int>& edges) {
        int n = edges.size();
        int ans=-1;
        int curr=1;
        vector<int> v(n);
        
        for(int i=0; i<n; i++){
            if(v[i]==0){
                int start = curr;
                int x = i;
                while(x!=-1 && v[x]==0){
                    v[x]=curr++;
                    x=edges[x];
                }
                if(x!=-1 && v[x]>=start)
                 ans=max(ans,curr-v[x]);
            }
        }
        return ans;
        
    }
};
