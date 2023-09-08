// Link: https://leetcode.com/problems/trapping-rain-water

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: trapping-rain-water
 *  RUNTIME: 11 ms
 *  MEMORY: 20.6 MB
 *  DATE: 2-3-2023, 10:07:30 PM
 *
 */

// Solution:

class Solution {
public:
    int trap(vector<int>& a) {
        int n=a.size();

        vector<int> left (n,-1);
        vector<int> right (n,-1);

        left[0]=a[0];
        for(int i=1; i<n; i++)
            left[i]=max(a[i],left[i-1]);


        right[n-1]=a[n-1];
        for(int i=n-2; i>=0; i--)
          right[i]= max(a[i],right[i+1]);

        int ans=0;
        for(int i=0; i<n; i++)
            ans+=min(left[i],right[i]) - a[i];
            
        return ans;
    }
};
