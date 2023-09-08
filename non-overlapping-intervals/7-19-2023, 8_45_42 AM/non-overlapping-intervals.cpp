// Link: https://leetcode.com/problems/non-overlapping-intervals

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: non-overlapping-intervals
 *  RUNTIME: 495 ms
 *  MEMORY: 89.7 MB
 *  DATE: 7-19-2023, 8:45:42 AM
 *
 */

// Solution:

class Solution {
public:
    void func(vector<vector<int>>& a){
        int n = a.size();
        for(int i=0; i<n; i++) swap(a[i][0],a[i][1]);
    }
    
    // 2,1 3,2 4,3 3,1
    // 2,1  3,1  3,2  4,3
    // 1,2  1,3  2,3  3,4

    // 100,1  22,11  11,1  12,2
    // 1,11  2,12  11,22  1,100
    int eraseOverlapIntervals(vector<vector<int>>& a) {
        int n = a.size();
        func(a);
        sort(a.begin(),a.end());
        func(a);
        // for(int i=0; i<n; i++){
        //     cout << a[i][0] << " " << a[i][1];
        //     cout << endl;
        // }

        int count=1;
        int j=0;
        for(int i=0; i<n-1; i++){
           if(a[j][1] <= a[i+1][0]){
              count++;
              j=i+1;
           } 
        }

        return n-count;
        // return 0;
       
    }
};
