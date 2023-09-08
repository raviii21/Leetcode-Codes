// Link: https://leetcode.com/problems/total-cost-to-hire-k-workers

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: total-cost-to-hire-k-workers
 *  RUNTIME: 211 ms
 *  MEMORY: 72.8 MB
 *  DATE: 6-26-2023, 5:17:33 PM
 *
 */

// Solution:

class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int x) {
        int n = costs.size();
        int left = x, right = n - x - 1;
        long ans = 0;
        priority_queue<int, vector<int>, greater<int>> q1;
        priority_queue<int, vector<int>, greater<int>> q2;
        
        for (int i = 0; i < x; i++)
            q1.push(costs[i]);
        for (int i = n - 1; i >= max(x, n - x); i--)
            q2.push(costs[i]);
        
        while (k-- > 0) {
            if (!q1.empty() && !q2.empty()) {
                if (q1.top() <= q2.top()) {
                    ans += q1.top();
                    q1.pop();
                    if (left <= right) {
                        q1.push(costs[left]);
                        left++;
                    }
                } else {
                    ans += q2.top();
                    q2.pop();
                    if (left <= right) {
                        q2.push(costs[right]);
                        right--;
                    }
                }
            } else if (!q1.empty()) {
                ans += q1.top();
                q1.pop();
            } else {
                ans += q2.top();
                q2.pop();
            }
        }
        
        return ans;
        
    }
};
