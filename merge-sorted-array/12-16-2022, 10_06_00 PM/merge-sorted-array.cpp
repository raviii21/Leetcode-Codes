// Link: https://leetcode.com/problems/merge-sorted-array

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: merge-sorted-array
 *  RUNTIME: 0 ms
 *  MEMORY: 9.1 MB
 *  DATE: 12-16-2022, 10:06:00 PM
 *
 */

// Solution:

class Solution {
public:
    void merge(vector<int>& a, int m, vector<int>& b, int n) {
        while((m-1)>=0 && (n-1)>=0){
            if(a[m-1] <= b[n-1]){
                a[m+n-1]=b[n-1];
                n--;
            }else{
                a[m+n-1]=a[m-1];
                m--;
            }
        }

        while((n-1)>=0){
            a[n-1]=b[n-1];
            n--;
        }
    }
};
