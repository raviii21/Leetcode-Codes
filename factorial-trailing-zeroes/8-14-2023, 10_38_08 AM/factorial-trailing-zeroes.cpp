// Link: https://leetcode.com/problems/factorial-trailing-zeroes

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: factorial-trailing-zeroes
 *  RUNTIME: 0 ms
 *  MEMORY: 6 MB
 *  DATE: 8-14-2023, 10:38:08 AM
 *
 */

// Solution:

class Solution {
public:
    int trailingZeroes(int n) {
        return (n/3125) + (n/625) + (n/125) + (n/25) + (n/5); 
    }
};
