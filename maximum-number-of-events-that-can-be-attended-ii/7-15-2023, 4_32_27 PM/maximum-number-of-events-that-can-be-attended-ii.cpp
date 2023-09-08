// Link: https://leetcode.com/problems/maximum-number-of-events-that-can-be-attended-ii

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: maximum-number-of-events-that-can-be-attended-ii
 *  RUNTIME: 337 ms
 *  MEMORY: 72.6 MB
 *  DATE: 7-15-2023, 4:32:27 PM
 *
 */

// Solution:

class Solution {
public:

    int solution(vector<vector<int>>& dp, vector<vector<int>>& events, int n, int pos, int k){
        if(k==0 || pos >= n) return 0;
        
        if(dp[pos][k]!=-1) return dp[pos][k];
        int i;
        for(i=pos+1; i<n; i++){
            if(events[i][0] > events[pos][1])
             break;
        }
        return dp[pos][k]=max(solution(dp,events,n,pos+1,k),events[pos][2]+solution(dp,events,n,i,k-1));
    }
    int maxValue(vector<vector<int>>& events, int k) {
        int n = events.size();
        sort(events.begin(),events.end());

        vector<vector<int>> dp(n+1,vector<int>(k+1,-1));
        int ans = solution(dp,events,n,0,k);
        return ans;
    }
};
