// Link: https://leetcode.com/problems/count-odd-numbers-in-an-interval-range

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: count-odd-numbers-in-an-interval-range
 *  RUNTIME: 3 ms
 *  MEMORY: 5.9 MB
 *  DATE: 2-13-2023, 10:08:57 AM
 *
 */

// Solution:

class Solution {
public:
    int countOdds(int low, int high) {
        int range = high-low+1;
        if(range %2 ==0) return range/2;
        else{
           if(low%2==1 && high%2==1) return (range/2)+1;
           else return range/2;
        }
    }
};
