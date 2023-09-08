// Link: https://leetcode.com/problems/reverse-words-in-a-string

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: reverse-words-in-a-string
 *  RUNTIME: 4 ms
 *  MEMORY: 8 MB
 *  DATE: 6-15-2023, 7:05:47 PM
 *
 */

// Solution:

class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        string t;
        vector<string> v;
        for(int i=0; i<n; i++){
            if(s[i]!=' ')t+=s[i];
            else {
                if(t.size()!=0){
                    v.push_back(t);
                    t.resize(0); 
                }   
            }
        }
        if(s[n-1]!=' ')v.push_back(t);

        // for(int i=0;i<v.size(); i++) cout << v[i] << " ";

        string ans;
        for(int i=v.size()-1; i>=0; i--){
            ans+=v[i];
            ans+=" ";
        }
        int x = ans.size();
        ans.resize(x-1);
        return ans;
    }
};
