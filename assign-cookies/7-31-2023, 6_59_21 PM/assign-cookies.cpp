// Link: https://leetcode.com/problems/assign-cookies

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: assign-cookies
 *  RUNTIME: 16 ms
 *  MEMORY: 17.4 MB
 *  DATE: 7-31-2023, 6:59:21 PM
 *
 */

// Solution:

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int m=g.size();
        int n=s.size();
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int ans=0;
        int j=0;
        for(int i=0; i<m; i++){
           if(j<n){
               int x;
               for(int k=j;k<n; k++){
                   if(g[i]<=s[k]){
                       ans++;
                       x=k;
                       break;
                   }
               }
               j=x+1;
           }
        }
        return ans;
    }
};
