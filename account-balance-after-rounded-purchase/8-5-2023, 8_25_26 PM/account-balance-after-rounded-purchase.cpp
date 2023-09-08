// Link: https://leetcode.com/problems/account-balance-after-rounded-purchase

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: account-balance-after-rounded-purchase
 *  RUNTIME: 2 ms
 *  MEMORY: 6 MB
 *  DATE: 8-5-2023, 8:25:26 PM
 *
 */

// Solution:

class Solution {
public:
    int accountBalanceAfterPurchase(int n) {
        // if(n==0) return 90;
        int roundedDown = (n / 10) * 10;
        int roundedUp = roundedDown + 10;
    
        return abs(roundedDown - n) < abs(roundedUp - n) ? 100-roundedDown : 100-roundedUp;
        
    }
};
