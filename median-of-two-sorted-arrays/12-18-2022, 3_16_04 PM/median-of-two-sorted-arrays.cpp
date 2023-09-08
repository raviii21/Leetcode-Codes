// Link: https://leetcode.com/problems/median-of-two-sorted-arrays

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: median-of-two-sorted-arrays
 *  RUNTIME: 55 ms
 *  MEMORY: 89.2 MB
 *  DATE: 12-18-2022, 3:16:04 PM
 *
 */

// Solution:

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if(nums2.size() < nums1.size()) return findMedianSortedArrays(nums2,nums1);
        int a=nums1.size();
        int b=nums2.size();
        int l=0,h=a;
        // Binary Search for valid cut.
        while(l<=h){
            int cut1=(l+h)/2;
            int cut2=(a+b+1)/2 - cut1;

            int l1=cut1;
            if(cut1==0) l1=INT_MIN;
            else l1=nums1[cut1-1];
            int l2=cut2;
            if(cut2==0) l2=INT_MIN;
            else l2=nums2[cut2-1];

            int r1=cut1;
            if(cut1==a) r1=INT_MAX;
            else r1=nums1[cut1];
            int r2=cut2;
            if(cut2==b) r2=INT_MAX;
            else r2=nums2[cut2];

            if(l1<=r2 && l2<=r1){
                if((a+b)%2) return max(l1,l2);
                else return (max(l1,l2)+min(r1,r2))/2.0;
            }
            else if(l1>r2)
             h=cut1-1;
            else l=cut1+1; 
        }
        return 0;
    }
};
