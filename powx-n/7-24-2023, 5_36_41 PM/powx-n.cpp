// Link: https://leetcode.com/problems/powx-n

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: powx-n
 *  RUNTIME: 0 ms
 *  MEMORY: 5.8 MB
 *  DATE: 7-24-2023, 5:36:41 PM
 *
 */

// Solution:

class Solution {
public:
   double func(double x,long long n){
       if(n==1) return x;
       double y=func(x,n/2);
       if(n%2) return y*y*x;
       else return y*y;
   }
    double myPow(double x, int n) {
        if(n==0) return 1;
        long long k=long(abs(n));
        double ans=func(x,k);
        if(n<0) ans=1/ans;
        return ans;
    }
};
