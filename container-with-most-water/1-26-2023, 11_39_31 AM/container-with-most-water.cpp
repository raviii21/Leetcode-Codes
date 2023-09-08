// Link: https://leetcode.com/problems/container-with-most-water

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: container-with-most-water
 *  RUNTIME: 88 ms
 *  MEMORY: 58.9 MB
 *  DATE: 1-26-2023, 11:39:31 AM
 *
 */

// Solution:

class Solution {
public:
    int maxArea(vector<int>& a) {
        int left=0;
        int right=a.size()-1;
        int ans=0;
        while(left<=right){
            int x=min(a[left],a[right]);
            int area=(right-left)*x;
            ans=max(ans,area);
            if(a[left] > a[right]) right--;
            else left++;
        }
        return ans;
    }
};
