// Link: https://leetcode.com/problems/sort-an-array

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: sort-an-array
 *  RUNTIME: 207 ms
 *  MEMORY: 65.8 MB
 *  DATE: 2-24-2023, 10:00:52 AM
 *
 */

// Solution:

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        priority_queue<int> q;
        int n = nums.size();
        for(int i: nums) q.push(i);
         
        for(int i=n-1; i>=0; i--){
            int x = q.top();
            q.pop();
            nums[i]=x;
        }
        return nums;
    }
};
