// Link: https://leetcode.com/problems/minimum-flips-to-make-a-or-b-equal-to-c

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: minimum-flips-to-make-a-or-b-equal-to-c
 *  RUNTIME: 4 ms
 *  MEMORY: 5.9 MB
 *  DATE: 6-7-2023, 6:05:03 PM
 *
 */

// Solution:

class Solution {
public:
    int minFlips(int a, int b, int c) {
        string aa = std::bitset<30>(a).to_string();
        string bb = std::bitset<30>(b).to_string();
        string cc = std::bitset<30>(c).to_string();
        int ans=0;
        for(int i=0; i<30; i++){
            if(cc[i]=='0'){
                if(aa[i]=='1') ans++;
                if(bb[i]=='1') ans++;
            }else{
                if(aa[i]=='0' && bb[i]=='0') ans++;
            }
        }
        return ans;
    }
};
