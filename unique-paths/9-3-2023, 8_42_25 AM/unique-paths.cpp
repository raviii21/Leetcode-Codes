// Link: https://leetcode.com/problems/unique-paths

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: unique-paths
 *  RUNTIME: 0 ms
 *  MEMORY: 5.9 MB
 *  DATE: 9-3-2023, 8:42:25 AM
 *
 */

// Solution:

class Solution {
public:
    int solution(int n,int m){
       long long int ans=1;
       for(int i=0; i<m; ++i){
           ans *= n-i;
           ans /= i+1;
       }
       return (int) ans;
        
    }
    int uniquePaths(int m, int n) {
        return solution(m+n-2,min(m-1,n-1));
    }
};
