// Link: https://leetcode.com/problems/boats-to-save-people

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: boats-to-save-people
 *  RUNTIME: 90 ms
 *  MEMORY: 41.9 MB
 *  DATE: 4-3-2023, 11:48:54 AM
 *
 */

// Solution:

class Solution {
public:
    int numRescueBoats(vector<int>& a, int limit) {
        int n = a.size();
        sort(a.begin(),a.end());
        int ans=0;
        int l=0,h=n-1;
        while(l <= h){
            if(a[l]+a[h] <= limit) l++;
            h--;
            ans++;
        }
        return ans;
    }
};
