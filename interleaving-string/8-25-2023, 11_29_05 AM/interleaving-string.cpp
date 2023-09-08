// Link: https://leetcode.com/problems/interleaving-string

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: interleaving-string
 *  RUNTIME: 40 ms
 *  MEMORY: 35.1 MB
 *  DATE: 8-25-2023, 11:29:05 AM
 *
 */

// Solution:

class Solution {
public:
    bool solution(int i,int j,int k, string s1,string s2, string s3,vector<vector<int>>& dp){
        if(i==s1.size() && j==s2.size() && k==s3.size()) return true;
        if(dp[i][j]!=-1) return dp[i][j];

        bool a=false,b=false;
        if(i!=s1.size()){
            if(s1[i] == s3[k]) a=solution(i+1,j,k+1,s1,s2,s3,dp);
        }
        if(j!=s2.size()){
            if(s2[j] == s3[k]) b= solution(i,j+1,k+1,s1,s2,s3,dp);
        }
        return dp[i][j]=a||b;
    }
    bool isInterleave(string s1, string s2, string s3) {
        int m=s1.size(),n=s2.size();
        int i=0,j=0,k=0;
        vector<vector<int>> dp(m+1,vector<int>(n+1,-1));
        return solution(i,j,k,s1,s2,s3,dp);
    }
};
