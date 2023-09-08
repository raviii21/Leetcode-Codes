// Link: https://leetcode.com/problems/remove-stones-to-minimize-the-total

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: remove-stones-to-minimize-the-total
 *  RUNTIME: 700 ms
 *  MEMORY: 105.1 MB
 *  DATE: 3-3-2023, 10:36:47 PM
 *
 */

// Solution:

class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        int n = piles.size();
        priority_queue<int> q;
        int ans=0;
        for(auto it: piles){
            q.push(it);
        }

        for(int i=0; i<k; i++){
            int x = q.top();
            q.pop();
            int  y = x-floor(x/2);
            q.push(y);
        }
        while(!q.empty()){
            int x = q.top();
            ans+=x;
            q.pop();
        }
        return ans;
    }
};
