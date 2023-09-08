// Link: https://leetcode.com/problems/word-break

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: word-break
 *  RUNTIME: 24 ms
 *  MEMORY: 15.9 MB
 *  DATE: 8-4-2023, 11:22:31 AM
 *
 */

// Solution:

class Solution {
public:
    int solution(int i, string s, unordered_set<string> st,vector<int>& dp){
        if(i==s.size()) return 1;
        if(dp[i]!=-1) return dp[i];

        string temp;
        for(int j=i; j<s.size(); j++){
            temp+=s[j];
            if(st.find(temp)!=st.end()){
                if(solution(j+1,s,st,dp)) return dp[i]=1;
            }
        }
        
        return dp[i]=0;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        int n = s.size();
        unordered_set<string> st;
        for(string it: wordDict) st.insert(it);

        vector<int> dp(301,-1);
        return solution(0,s,st,dp);
    }
};
