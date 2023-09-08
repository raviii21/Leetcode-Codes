// Link: https://leetcode.com/problems/sign-of-the-product-of-an-array

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: sign-of-the-product-of-an-array
 *  RUNTIME: 3 ms
 *  MEMORY: 10.2 MB
 *  DATE: 5-2-2023, 10:10:20 AM
 *
 */

// Solution:

class Solution {
public:
    int arraySign(vector<int>& nums) {
        int n = nums.size();
        int isZero=0;
        int count=0;
        for(int i=0; i<n; i++){
            if(nums[i]==0){
                isZero=1;
                break;
            }
            if(nums[i] < 0) count++;
        }
        if(isZero) return 0;
        else{
            if(count%2==0) return 1;
            else return -1;
        }
    }
};
