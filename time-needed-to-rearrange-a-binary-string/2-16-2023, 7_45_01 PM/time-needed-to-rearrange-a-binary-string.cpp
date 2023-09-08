// Link: https://leetcode.com/problems/time-needed-to-rearrange-a-binary-string

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: time-needed-to-rearrange-a-binary-string
 *  RUNTIME: 62 ms
 *  MEMORY: 6.5 MB
 *  DATE: 2-16-2023, 7:45:01 PM
 *
 */

// Solution:

class Solution {
public:
    int secondsToRemoveOccurrences(string &s) {
        int check=0;
        for(int i=0; i<s.size()-1; ){
            if(s[i]=='0' && s[i+1]=='1'){
                check=1;
                swap(s[i],s[i+1]);
                i+=2;
            }else{
                i++;
            }
        }
        if(!check) return 0;

        return 1+secondsToRemoveOccurrences(s); 
        
    }
};
