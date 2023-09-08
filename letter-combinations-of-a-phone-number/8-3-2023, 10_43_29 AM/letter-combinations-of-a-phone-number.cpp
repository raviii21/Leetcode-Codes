// Link: https://leetcode.com/problems/letter-combinations-of-a-phone-number

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: letter-combinations-of-a-phone-number
 *  RUNTIME: 3 ms
 *  MEMORY: 6.3 MB
 *  DATE: 8-3-2023, 10:43:29 AM
 *
 */

// Solution:

class Solution {
public:
    void solution(int i,int n,vector<string>& v,vector<string>& ans, string temp,string digits){
          if(i==n){
              ans.push_back(temp);
              return;
          }
          int num = digits[i]-'0';
          for(char ch: v[num]){
              temp.push_back(ch);
              solution(i+1,n,v,ans,temp,digits);
              temp.pop_back();
          }

    }
    vector<string> letterCombinations(string digits) {
        int n=digits.size();
        vector<string> ans;
        vector<string> v={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        string s="";
        if(n==0) return ans;
        solution(0,n,v,ans,s,digits);
        return ans;
    }
};
