// Link: https://leetcode.com/problems/sort-items-by-groups-respecting-dependencies

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: sort-items-by-groups-respecting-dependencies
 *  RUNTIME: 123 ms
 *  MEMORY: 57.1 MB
 *  DATE: 8-20-2023, 11:46:25 AM
 *
 */

// Solution:

class Solution {
public:
    vector<int> topo(unordered_map<int, vector<int>>& graph, vector<int>& indegree){
        vector<int> visited;
        stack<int> st;
        for(int i=0; i<indegree.size(); i++){
            if(indegree[i]==0) st.push(i);
        }
        while(!st.empty()){
            int curr = st.top();
            st.pop();
            visited.push_back(curr);

            for(int n : graph[curr]){
                indegree[n]--;
                if(indegree[n]==0) st.push(n);
            }
        }
        if(visited.size() == graph.size()) return visited;
        return {};
    }
    vector<int> sortItems(int n, int m, vector<int>& group, vector<vector<int>>& beforeItems) {
        int groupId = m;
        for(int i=0; i<n; i++){
            if(group[i] == -1) group[i]=groupId++;
        }

        unordered_map<int,vector<int>> itemGraph;
        vector<int> itemIndeg(n,0);
        for(int i=0; i<n; i++){
            itemGraph[i]=vector<int> ();
        }

        unordered_map<int, vector<int>> groupGraph;
        vector<int> groupIndeg(groupId, 0);
        for (int i = 0; i < groupId; ++i) {
            groupGraph[i] = vector<int>();
        }

        for(int i=0; i<n; i++){
            for(int it: beforeItems[i]){
                itemGraph[it].push_back(i);
                itemIndeg[i]++;
                if(group[i]!=group[it]){
                    groupGraph[group[it]].push_back(group[i]);
                    groupIndeg[group[i]]++;
                }
            }
        }
        vector<int> itemOrder = topo(itemGraph, itemIndeg);
        vector<int> groupOrder = topo(groupGraph, groupIndeg);

        if(itemOrder.empty() || groupOrder.empty()){
            return {};
        }
        unordered_map<int,vector<int>> orderGroups;
        for(int item: itemOrder){
            orderGroups[group[item]].push_back(item);
        }
        vector<int> answerList;
        for(int ind: groupOrder){
            answerList.insert(answerList.end(), orderGroups[ind].begin(), orderGroups[ind].end());
        }
        return answerList;
    }
};
