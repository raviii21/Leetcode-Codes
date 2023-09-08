// Link: https://leetcode.com/problems/maximum-points-you-can-obtain-from-cards

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: maximum-points-you-can-obtain-from-cards
 *  RUNTIME: 51 ms
 *  MEMORY: 42.3 MB
 *  DATE: 7-29-2023, 9:20:25 PM
 *
 */

// Solution:

class Solution {
public:
    int maxScore(vector<int>& a, int k) {
        int n = a.size();
        int totalSum=0;
        for(int i=0; i<n; i++) totalSum+=a[i];
        if(n==k) return totalSum;

        
        int leftSum=0,rightSum=0;
        for(int i=0; i<k; i++) leftSum+=a[i];
        
        int ans = leftSum;
        for(int i=0; i<k; i++){
            leftSum-=a[k-1-i];
            rightSum+=a[n-1-i];
            ans=max(ans,leftSum+rightSum);
        }
        return ans;
    }
};
