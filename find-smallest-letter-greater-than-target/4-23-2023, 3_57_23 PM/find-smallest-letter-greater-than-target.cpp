// Link: https://leetcode.com/problems/find-smallest-letter-greater-than-target

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: find-smallest-letter-greater-than-target
 *  RUNTIME: 10 ms
 *  MEMORY: 15.9 MB
 *  DATE: 4-23-2023, 3:57:23 PM
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
