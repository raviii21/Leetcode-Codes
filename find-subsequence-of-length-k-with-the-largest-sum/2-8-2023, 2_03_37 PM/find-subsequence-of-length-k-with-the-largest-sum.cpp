// Link: https://leetcode.com/problems/find-subsequence-of-length-k-with-the-largest-sum

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: find-subsequence-of-length-k-with-the-largest-sum
 *  RUNTIME: 11 ms
 *  MEMORY: 9.6 MB
 *  DATE: 2-8-2023, 2:03:37 PM
 *
 */

// Solution:

class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> v=nums;
        vector<int> r;
        vector<int> ans;

        sort(v.begin(),v.end());
        for(int i=n-k ;i<n; i++)
            r.push_back(v[i]);
        
        for(auto it : nums){
            auto idx = find(r.begin(),r.end(),it);
            if(idx!=r.end()){
                ans.push_back(it);
                r.erase(r.begin()+(idx-r.begin()));
            }
        }
        return ans;
    }
};
