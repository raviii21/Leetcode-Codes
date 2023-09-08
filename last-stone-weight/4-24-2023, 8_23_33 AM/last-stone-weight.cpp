// Link: https://leetcode.com/problems/last-stone-weight

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: last-stone-weight
 *  RUNTIME: 0 ms
 *  MEMORY: 7.6 MB
 *  DATE: 4-24-2023, 8:23:33 AM
 *
 */

// Solution:

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int n = stones.size();
        priority_queue<int> q;
        for(int i=0; i<n; i++){
            q.push(stones[i]);
        }
        while(q.size()!=1) {
            if(q.size()==0) return 0;
           int x = q.top();
           q.pop();
           int y = q.top();
           q.pop();
           if(x!=y){
               q.push(x-y);
           }
        }
        return q.top();
    }
};
