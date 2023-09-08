// Link: https://leetcode.com/problems/jump-game-ii

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: jump-game-ii
 *  RUNTIME: 1499 ms
 *  MEMORY: 17.2 MB
 *  DATE: 2-8-2023, 10:33:34 AM
 *
 */

// Solution:

class Solution {
public:
    int jump(vector<int>& nums) {
        int n= nums.size();
        if(n==1) return 0;
        vector<int> v(n,1e9);
        v[0]=0;
        for(int i=1; i<n; i++){
            for(int j=0; j<i; j++) 
             if(i <= (j+nums[j])) 
               v[i]=min(v[i],v[j]+1);
        }
        return v[n-1];
    }
};
