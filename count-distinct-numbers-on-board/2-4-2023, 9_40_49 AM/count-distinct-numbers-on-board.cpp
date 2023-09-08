// Link: https://leetcode.com/problems/count-distinct-numbers-on-board

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: count-distinct-numbers-on-board
 *  RUNTIME: 0 ms
 *  MEMORY: 6 MB
 *  DATE: 2-4-2023, 9:40:49 AM
 *
 */

// Solution:

class Solution {
public:
    int distinctIntegers(int n) {
        if(n==1) return 1;
        return n-1;
    }
};
