// Link: https://leetcode.com/problems/longest-arithmetic-subsequence

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: longest-arithmetic-subsequence
 *  RUNTIME: 2839 ms
 *  MEMORY: 256.3 MB
 *  DATE: 6-23-2023, 1:36:00 PM
 *
 */

// Solution:

class Solution {
public:
    int longestArithSeqLength(vector<int>& nums) {
        int n = nums.size();

        if(n<=2) return n;
        int ans=0;
        map<int,int> m[n+1];

        for(int i=1; i<n; i++){
            for(int j=0; j<i; j++){
                int dif = nums[i]-nums[j];
                int count=1;

                if(m[j].count(dif)==1) count = m[j][dif];

                m[i][dif]=1+count;
                ans = max(ans,m[i][dif]);
            }
        }
        return ans;
    }
};
