// Link: https://leetcode.com/problems/maximal-score-after-applying-k-operations

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: maximal-score-after-applying-k-operations
 *  RUNTIME: 343 ms
 *  MEMORY: 75.9 MB
 *  DATE: 2-23-2023, 2:37:00 PM
 *
 */

// Solution:

class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<int> q; 
        int n = nums.size();
        long long score=0;
        for(int i=0; i<n; i++){
            q.push(nums[i]);
        }

        for(int i=0; i<k; i++){
             int x = q.top();
             q.pop();
             score+=x; 
             int y;
             if(x%3 == 0) y=x/3;
             else y=(x/3)+1;
             q.push(y);
        }
        return score;
    }
};
