// Link: https://leetcode.com/problems/kth-largest-element-in-an-array

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: kth-largest-element-in-an-array
 *  RUNTIME: 92 ms
 *  MEMORY: 49.9 MB
 *  DATE: 8-14-2023, 9:04:31 AM
 *
 */

// Solution:

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> q;
        int n = nums.size();
        for(int i=0; i<n; i++){
            q.push(nums[i]); 
        } 
        int ans;
        while(k--){
            int x = q.top();
            q.pop();
            ans=x;
        }
        return ans;
    }
};
