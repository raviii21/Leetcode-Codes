// Link: https://leetcode.com/problems/minimum-moves-to-reach-target-score

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: minimum-moves-to-reach-target-score
 *  RUNTIME: 1606 ms
 *  MEMORY: 5.9 MB
 *  DATE: 2-11-2023, 10:30:40 PM
 *
 */

// Solution:

class Solution {
public:
    int minMoves(int target, int maxDoubles) {
        int ans=0;
        int i=target;
        if(maxDoubles == 0) return target-1;
        while(i!=1){
            if(maxDoubles > 0 && (i/2)>=1 && i%2==0){
                i/=2;
                maxDoubles--;
                ans++;
            }else{
                i-=1;
                ans++;
            }
        }
        return ans;
    }
};
