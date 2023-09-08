// Link: https://leetcode.com/problems/kth-smallest-element-in-a-sorted-matrix

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: kth-smallest-element-in-a-sorted-matrix
 *  RUNTIME: 42 ms
 *  MEMORY: 14.5 MB
 *  DATE: 2-27-2023, 6:41:45 PM
 *
 */

// Solution:

class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n = matrix.size();
        priority_queue<int> q;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                q.push(matrix[i][j]);
            }
        }

        int x = (n*n)-k;
        while(x--){
            q.pop();
        }

        return q.top();
    }
};
