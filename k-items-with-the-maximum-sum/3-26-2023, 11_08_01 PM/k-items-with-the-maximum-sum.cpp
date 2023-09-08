// Link: https://leetcode.com/problems/k-items-with-the-maximum-sum

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: k-items-with-the-maximum-sum
 *  RUNTIME: 7 ms
 *  MEMORY: 6.7 MB
 *  DATE: 3-26-2023, 11:08:01 PM
 *
 */

// Solution:

class Solution {
public:
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
        vector<int> v;
        int ans=0;
        while(numOnes){
            v.push_back(1);
            numOnes--;
        } 
        while(numZeros){
            v.push_back(0);
            numZeros--;
        }
        while(numNegOnes){
            v.push_back(-1);
            numNegOnes--;
        }
        for(int i=0; i<k; i++) ans+=v[i];
        return ans;
        
    }
};
