// Link: https://leetcode.com/problems/extra-characters-in-a-string

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: extra-characters-in-a-string
 *  RUNTIME: 209 ms
 *  MEMORY: 81.1 MB
 *  DATE: 9-2-2023, 9:15:06 AM
 *
 */

// Solution:

class Solution {
public:
    int minExtraChar(string s, vector<string>& dict) {
        int n = s.size();
        set<string> st;
        for(auto it: dict) st.insert(it);

        vector<int> dp(n+1,0);
        for(int i=n-1; i>=0; i--){
            dp[i]=dp[i+1]+1;

            for(int j=i; j<n; j++){
                string str = s.substr(i,j-i+1);
                if(st.find(str)!=st.end()){
                    dp[i]=min(dp[i],dp[j+1]);
                }
            }
        }
        return dp[0];
    }
};
