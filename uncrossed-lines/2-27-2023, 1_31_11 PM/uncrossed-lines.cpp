// Link: https://leetcode.com/problems/uncrossed-lines

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: uncrossed-lines
 *  RUNTIME: 4 ms
 *  MEMORY: 9.7 MB
 *  DATE: 2-27-2023, 1:31:11 PM
 *
 */

// Solution:

class Solution {
public:
    int maxUncrossedLines(vector<int>& a, vector<int>& b) {
        int x=a.size();
        int y=b.size();

        int m[x+1][y+1];
        for(int i=0; i<=x; i++) {
            for(int j=0; j<=y; j++){
                if(i==0 || j==0) m[i][j]=0;
                else if(a[i-1]==b[j-1]) m[i][j]=m[i-1][j-1] + 1;
                else{
                    m[i][j]=max(m[i-1][j], m[i][j-1]);
                }
            }
        }

        int ans=m[x][y];
        return ans;
    }
};
