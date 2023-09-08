// Link: https://leetcode.com/problems/maximum-value-at-a-given-index-in-a-bounded-array

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: maximum-value-at-a-given-index-in-a-bounded-array
 *  RUNTIME: 0 ms
 *  MEMORY: 6 MB
 *  DATE: 6-10-2023, 6:37:37 PM
 *
 */

// Solution:

class Solution {
public:
    int maxValue(int n, int index, int maxSum) {
        int l=1,h=maxSum;
        long long int ans=0;
        int rs=n-index-1, ls=index;
        while(l<=h){
            int m=(l+h)/2;
            long long int rSum=0,lSum=0, x=m-1;
            
            if(rs > x) rSum=(x*(x+1))/2 + (rs-x);
            else rSum=(x*(x+1))/2 - ((x-rs)*(x-rs+1))/2;
            if(ls > x) lSum=(x*(x+1))/2 + (ls-x);
            else lSum=(x*(x+1))/2 - ((x-ls)*(x-ls+1))/2;

            long long int total = lSum+rSum+m;
            if(total > maxSum) h=m-1;
            else {
            l=m+1;
            ans=m;
            }
        }
        return ans;
    }
};
