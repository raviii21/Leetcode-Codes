// Link: https://leetcode.com/problems/find-smallest-letter-greater-than-target

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: find-smallest-letter-greater-than-target
 *  RUNTIME: 16 ms
 *  MEMORY: 16.1 MB
 *  DATE: 6-9-2023, 10:48:34 AM
 *
 */

// Solution:

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n = letters.size();
        for(int i=0; i<n; i++){
            if(target < letters[i]){
                return letters[i];
                break;
            }
        }
        return letters[0];
    }
};
