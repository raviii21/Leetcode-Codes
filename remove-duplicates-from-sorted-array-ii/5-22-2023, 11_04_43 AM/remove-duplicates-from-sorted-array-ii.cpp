// Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: remove-duplicates-from-sorted-array-ii
 *  RUNTIME: 9 ms
 *  MEMORY: 11.6 MB
 *  DATE: 5-22-2023, 11:04:43 AM
 *
 */

// Solution:

class Solution {
public:
    int removeDuplicates(vector<int>& a) {
        int n = a.size();
        int ans=0;
        map<int,int> m;
        for(int i=0; i<n; i++){
            m[a[i]]++;
            if(m[a[i]] <= 2)a[ans++]=a[i];
        }
        return ans;
    }
};
