// Link: https://leetcode.com/problems/task-scheduler

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: task-scheduler
 *  RUNTIME: 107 ms
 *  MEMORY: 43.9 MB
 *  DATE: 7-31-2023, 2:36:28 PM
 *
 */

// Solution:

class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int k = tasks.size();
        if(n==0) return k;
        map<char,int> m;
        for(int i=0; i<k; i++) m[tasks[i]]++;

        priority_queue<int> q;
        int ans=0;
        for(auto it : m) q.push(it.second);
        while(!q.empty()){
            vector<int> v;
            int time=0;
            for(int i=0; i<=n; i++){
                if(!q.empty()){
                    v.push_back(q.top()-1);
                    q.pop();
                    time++;
                }
            }
            for(int i=0; i<v.size(); i++){
                if(v[i]!=0) q.push(v[i]);
            }
            if(q.empty())ans+=time;
            else ans+=n+1;
        }
        return ans;
    }
};
