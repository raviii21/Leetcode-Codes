// Link: https://leetcode.com/problems/number-of-beautiful-integers-in-the-range

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: number-of-beautiful-integers-in-the-range
 *  RUNTIME: 2644 ms
 *  MEMORY: 6 MB
 *  DATE: 8-20-2023, 9:31:14 AM
 *
 */

// Solution:

class Solution {
public:
    bool same(int n){
        int on=0,en=0;
        while(n > 0){
            int dig = n%10;
            if(dig%2==0) en++;
            else on++;
            n/=10;
        }
        return on==en;
    }
    int numberOfBeautifulIntegers(int low, int high, int k) {
        int ans=0;
        for(int i=10; i<99; i++){
            if(i > high) break;
            if(i < low) continue;
            if(i%k==0 && same(i)) ans++;
        }
        for(int i=1000; i<9999; i++){
            if(i > high) break;
            if(i < low) continue;
            if(i%k==0 && same(i)) ans++;
        }
        for(int i=100000; i<999999; i++){
            if(i > high) break;
            if(i < low) continue;
            if(i%k==0 && same(i)) ans++;
        }
        for(int i=10000000; i<99999999; i++){
            if(i > high) break;
            if(i < low) continue;
            if(i%k==0 && same(i)) ans++;
        }
        return ans;
    }
};
