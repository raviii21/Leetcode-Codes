// Link: https://leetcode.com/problems/detect-capital

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: detect-capital
 *  RUNTIME: 0 ms
 *  MEMORY: 6.1 MB
 *  DATE: 2-17-2023, 11:33:40 PM
 *
 */

// Solution:

class Solution {
public:
    bool detectCapitalUse(string word) {
        int n = word.size();
        bool ans = true;
        bool firstcap = false;
        bool firstsmall=false;

        if(word[0]<=90) firstcap=true;
        else firstsmall = true;

        if(firstcap){
            int count=0;
             for(int i=1; i<n; i++){
                if(word[i]<=90) count++;
            }

            if(count ==0 || count==n-1) return true;
            else return false;
            
        }else{
            int count=0;
            for(int i=1; i<n; i++){
                if(word[i]>=97) count++;
            }
            if(count == n-1) return true;
            else return false;
        }
        
    }
};
