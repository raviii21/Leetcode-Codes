// Link: https://leetcode.com/problems/string-compression

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: string-compression
 *  RUNTIME: 10 ms
 *  MEMORY: 9.1 MB
 *  DATE: 3-2-2023, 6:14:49 PM
 *
 */

// Solution:

class Solution {
public:
    int compress(vector<char>& chars) {
        string s;
        int n = chars.size();

        int count = 1;
        char ch = chars[0];

        for(int i=1; i<=n; i++){
            if(i < n  && chars[i] == ch){
                count++;
            }else{
                s+=ch;
                if(i<n) ch=chars[i];
                else ch='0'; 
                if(count > 1){
                    string r = to_string(count);
                    for(auto it: r){
                        s+=it;
                    }
                }
                count = 1;
            }
        }

        for(int i=0; i<s.size(); i++){
            chars[i]= s[i];
        }
        return s.size();
    }
};
