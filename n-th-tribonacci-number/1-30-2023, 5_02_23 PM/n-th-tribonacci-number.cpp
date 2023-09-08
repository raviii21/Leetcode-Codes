// Link: https://leetcode.com/problems/n-th-tribonacci-number

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: n-th-tribonacci-number
 *  RUNTIME: 3 ms
 *  MEMORY: 6 MB
 *  DATE: 1-30-2023, 5:02:23 PM
 *
 */

// Solution:

class Solution {
public:
        
    int tribonacci(int n) {
        int a[38];
        a[0]=0;
        a[1]=a[2]=1;

        for(int i=3; i<38; i++)
         a[i]=a[i-1]+a[i-2]+a[i-3];
        return a[n];
    }
};
