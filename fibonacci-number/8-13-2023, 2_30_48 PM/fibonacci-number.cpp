// Link: https://leetcode.com/problems/fibonacci-number

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: fibonacci-number
 *  RUNTIME: 14 ms
 *  MEMORY: 5.9 MB
 *  DATE: 8-13-2023, 2:30:48 PM
 *
 */

// Solution:

class Solution {
public:
    int fib(int n) {
        if(n==0) return 0;
        if(n==1) return 1;
        return fib(n-1)+fib(n-2);
    }
};
