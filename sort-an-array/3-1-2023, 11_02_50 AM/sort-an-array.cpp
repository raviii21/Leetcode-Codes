// Link: https://leetcode.com/problems/sort-an-array

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: sort-an-array
 *  RUNTIME: 224 ms
 *  MEMORY: 66 MB
 *  DATE: 3-1-2023, 11:02:50 AM
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
