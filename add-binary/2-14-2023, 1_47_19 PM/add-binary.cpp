// Link: https://leetcode.com/problems/add-binary

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: add-binary
 *  RUNTIME: 5 ms
 *  MEMORY: 6.4 MB
 *  DATE: 2-14-2023, 1:47:19 PM
 *
 */

// Solution:

class Solution {
public:
    string addBinary(string a, string b) {
        string ans;
        int n=a.size()-1;
        int m=b.size()-1;
        int carry=0;
        while(n>=0 || m>=0 || carry){
            if(n>=0) {
                carry+=a[n]-'0';
                n--;
            }
            if(m>=0) {
                carry+=b[m]-'0';
                m--;
            }

            ans+=carry%2 +'0';
            carry/=2;
        }
        reverse(ans.begin(),ans.end());
        return ans;

    }
};
