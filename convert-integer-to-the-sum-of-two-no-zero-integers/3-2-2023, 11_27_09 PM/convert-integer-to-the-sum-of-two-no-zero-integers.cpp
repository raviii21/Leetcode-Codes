// Link: https://leetcode.com/problems/convert-integer-to-the-sum-of-two-no-zero-integers

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: convert-integer-to-the-sum-of-two-no-zero-integers
 *  RUNTIME: 0 ms
 *  MEMORY: 6.3 MB
 *  DATE: 3-2-2023, 11:27:09 PM
 *
 */

// Solution:

class Solution {
public:

    int isNoZeroInt(int n){
        while(n!=0){
            int x = n%10;
            n/=10;
            if(x==0) return 0;
        }
        return 1;
    }
    vector<int> getNoZeroIntegers(int n) {
        vector<int> ans;
        int i=1,j=n-1;
        while(true){
            int x = isNoZeroInt(i);
            int y = isNoZeroInt(j);
            if(x==1 && y==1){
                ans.push_back(i);
                ans.push_back(j);
                break;
            }else{
                i++;
                j--;
            }
        }
        return ans;
    }
};
