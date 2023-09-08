// Link: https://leetcode.com/problems/zigzag-conversion

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: zigzag-conversion
 *  RUNTIME: 7 ms
 *  MEMORY: 8.3 MB
 *  DATE: 2-3-2023, 9:40:02 AM
 *
 */

// Solution:

class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1) return s;

        int n=s.size();

        string ans;

        int index;
        for(int i=0; i<numRows; i++){
           index=i;
           while(index < n){
               ans+=s[index];
               if(i!=0 && i!=numRows-1){
                   int x=index+2*(numRows-1)-2*i;
                   
                   if(x<n) 
                    ans+=s[x];
               }
               index+=2*(numRows-1);
           }
        }

        return ans;

    }
};
