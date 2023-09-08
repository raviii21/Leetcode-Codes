// Link: https://leetcode.com/problems/greatest-common-divisor-of-strings

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: greatest-common-divisor-of-strings
 *  RUNTIME: 6 ms
 *  MEMORY: 7.2 MB
 *  DATE: 2-1-2023, 6:47:26 PM
 *
 */

// Solution:

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if (str1+str2 != str2+str1) return "";
        
        int Gcd = gcd(str1.size(), str2.size());
        return str1.substr(0, Gcd);
    }
};
