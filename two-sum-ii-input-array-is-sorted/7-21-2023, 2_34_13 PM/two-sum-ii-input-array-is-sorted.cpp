// Link: https://leetcode.com/problems/two-sum-ii-input-array-is-sorted

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: two-sum-ii-input-array-is-sorted
 *  RUNTIME: 19 ms
 *  MEMORY: 15.8 MB
 *  DATE: 7-21-2023, 2:34:13 PM
 *
 */

// Solution:

class Solution {
public:
    vector<int> twoSum(vector<int>& a, int target) {
        int n = a.size();
        vector<int> ans(2);
        
        int flag=0;
        for(int i=0; i<n; i++){
            int sum=a[i];
            int l=i+1,h=n-1;
            while(l<=h){
                int m=(l+h)/2;
                if(a[m]==target-sum) {
                    ans[0]=i+1;
                    ans[1]=m+1;
                    flag=1;
                    break;
                }else if(a[m] > target-sum) h=m-1;
                else l=m+1;
            }
            if(flag) break;
        }

        return ans;
    }
};
