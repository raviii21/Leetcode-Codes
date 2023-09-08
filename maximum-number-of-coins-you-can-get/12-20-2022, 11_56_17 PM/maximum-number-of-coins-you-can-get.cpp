// Link: https://leetcode.com/problems/maximum-number-of-coins-you-can-get

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: maximum-number-of-coins-you-can-get
 *  RUNTIME: 235 ms
 *  MEMORY: 53.4 MB
 *  DATE: 12-20-2022, 11:56:17 PM
 *
 */

// Solution:

class Solution {
public:
    int maxCoins(vector<int>& v) {
        sort(v.begin(),v.end());
        int n=v.size();
        int a=n/3;
        int ans=0;
        int flag=0;
        for(int i=(n-2); i>=0; i-=2){
            if(flag!=a){
               ans+=v[i];
               flag++;
            }
            else break;
        }
        return ans;
    }
};
