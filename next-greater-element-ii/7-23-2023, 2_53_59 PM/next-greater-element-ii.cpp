// Link: https://leetcode.com/problems/next-greater-element-ii

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: next-greater-element-ii
 *  RUNTIME: 47 ms
 *  MEMORY: 24 MB
 *  DATE: 7-23-2023, 2:53:59 PM
 *
 */

// Solution:

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int y=nums.size();
        vector<int> v(y,-1);
        stack<int> s;
        for(int i=2*y-1; i>=0; i--){
            while(!s.empty() && nums[s.top()]<=nums[i%y]){
                s.pop();
            }
            if(!s.empty()) v[i%y]=nums[s.top()];

            s.push(i%y);
        }
       
       return v;
    }
};
