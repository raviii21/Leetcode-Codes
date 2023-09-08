// Link: https://leetcode.com/problems/kids-with-the-greatest-number-of-candies

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: kids-with-the-greatest-number-of-candies
 *  RUNTIME: 4 ms
 *  MEMORY: 9 MB
 *  DATE: 4-17-2023, 8:37:42 AM
 *
 */

// Solution:

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& a, int x) {
        int n = a.size();
        int maxi=INT_MIN;
        for(int i=0; i<n; i++)  maxi = max(maxi , a[i]); 

     vector<bool > ans(n,false);
     for(int i=0;i<n;i++){
         if((x + a[i])>=maxi) ans[i]=true ;
     }
     return ans;
        
    }
};
