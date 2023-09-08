// Link: https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: number-of-steps-to-reduce-a-number-to-zero
 *  RUNTIME: 0 ms
 *  MEMORY: 5.8 MB
 *  DATE: 2-11-2023, 10:20:43 PM
 *
 */

// Solution:

class Solution {
public:
    int numberOfSteps(int num) {
        int ans=0;
        while(num!=0){
           if(num%2 == 0)    num/=2;
           else num-=1; 
           ans++;
        }
        return ans;
    }
};
