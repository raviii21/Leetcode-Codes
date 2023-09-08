// Link: https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: maximum-product-of-two-elements-in-an-array
 *  RUNTIME: 8 ms
 *  MEMORY: 10.1 MB
 *  DATE: 3-15-2023, 5:55:51 PM
 *
 */

// Solution:

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        priority_queue<int> q;
        for(int it: nums) q.push(it);
        int x= q.top();
        q.pop();
        int y = q.top();
        return (x-1)*(y-1);
    }
};
