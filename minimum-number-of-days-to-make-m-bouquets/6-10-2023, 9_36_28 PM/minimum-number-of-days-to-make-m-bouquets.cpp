// Link: https://leetcode.com/problems/minimum-number-of-days-to-make-m-bouquets

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: minimum-number-of-days-to-make-m-bouquets
 *  RUNTIME: 183 ms
 *  MEMORY: 66.5 MB
 *  DATE: 6-10-2023, 9:36:28 PM
 *
 */

// Solution:

class Solution {
public:
    int minDays(vector<int>& a, int m, int k) {
        int n = a.size();
        if(n<(long long)m * k) return -1;
        int l=1,h=*max_element(a.begin(),a.end());
        int ans=h;
        while(l<=h){
            int mid = (l+h)/2;
            
            int x=0,count=0;
            for(int i=0; i<n; i++){
                if(a[i] <= mid) count++;
                else{
                    x+=count/k;
                    count=0;
                }
            }
            x+=count/k;
            if(x < m) l=mid+1;
            else{
                ans = min(ans,mid);
                h=mid-1;
            }
        }
        return ans;
    }
};
