// Link: https://leetcode.com/problems/find-smallest-letter-greater-than-target

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: find-smallest-letter-greater-than-target
 *  RUNTIME: 15 ms
 *  MEMORY: 15.8 MB
 *  DATE: 6-9-2023, 6:00:31 PM
 *
 */

// Solution:

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n = letters.size();
        int l=0,h=n-1;
        while(l<=h){
            int m = (l+h)/2;
            if(letters[m]<=target) l=m+1;
            else h=m-1;
        }
        if(n==l) return letters[0];
        else return letters[l];
    }
};
