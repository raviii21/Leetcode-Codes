// Link: https://leetcode.com/problems/count-good-numbers

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: count-good-numbers
 *  RUNTIME: 0 ms
 *  MEMORY: 5.9 MB
 *  DATE: 7-23-2023, 1:59:14 PM
 *
 */

// Solution:

class Solution {
public:
    int mod = 1000000007;
    long long int pow(long long int x,long long int y){
        if(y==0) return 1;
        long long int ans = pow(x,y/2);
        ans = (ans*ans)%mod;

        if(y%2==1) ans = (ans*x)%mod;
        return ans;
    }
    int countGoodNumbers(long long n) {
        long long int y=n/2;
        long long int x=n-y;

        return (pow(5,x)*pow(4,y))%mod;
    }
};
