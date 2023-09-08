// Link: https://leetcode.com/problems/number-of-ways-of-cutting-a-pizza

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: number-of-ways-of-cutting-a-pizza
 *  RUNTIME: 20 ms
 *  MEMORY: 8 MB
 *  DATE: 3-31-2023, 2:29:58 PM
 *
 */

// Solution:

class Solution {
public:
    int dp[51][51][51];
    int mod=1e9+7;
    int check(vector<string>& pizza,int x,int y,int n,int m)
    {
        for(int i=x;i<n;i++)
        {
            for(int j=y;j<m;j++)
            {
                if(pizza[i][j]=='A') return true;
            }
        }
        return false;
    }
    int find(vector<string>& pizza,int x,int y,int k,int n,int m)
    {
        if(k==1) return check(pizza,x,y,n,m);
        if(dp[x][y][k]!=-1) return dp[x][y][k];
        
        long long ans=0;
        for(int i=x+1;i<n;i++)
        {
            if(check(pizza,x,y,i,m))
               ans+=find(pizza,i,y,k-1,n,m);
        }
        for(int j=y+1;j<m;j++)
        {
            if(check(pizza,x,y,n,j))
               ans+=find(pizza,x,j,k-1,n,m);
        }
        return dp[x][y][k]=ans%mod;
    }
    int ways(vector<string>& pizza, int k) 
    {
        memset(dp,-1,sizeof(dp));
         int n=pizza.size();
         int m=pizza[0].size();
        return find(pizza,0,0,k,n,m);
    }
};
