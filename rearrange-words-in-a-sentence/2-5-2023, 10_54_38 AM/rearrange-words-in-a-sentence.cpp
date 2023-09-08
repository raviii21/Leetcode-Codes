// Link: https://leetcode.com/problems/rearrange-words-in-a-sentence

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: rearrange-words-in-a-sentence
 *  RUNTIME: 39 ms
 *  MEMORY: 18.6 MB
 *  DATE: 2-5-2023, 10:54:38 AM
 *
 */

// Solution:

class Solution {
public:
    string arrangeWords(string text) {
        string ans;
        int n=text.size();
        multimap<int,string> m;
        
        string temp;
        for(int i=0; i<n; i++){
          if(text[i]!=' ') 
             temp+=text[i];
          else{
              int x=temp.size();
              m.insert({x,temp});
              temp="";
          }  
        }  
        
        int x=temp.size();
        m.insert({x,temp});
        temp="";

        for(auto& it: m){
          string x=it.second;
          transform(x.begin(), x.end(), x.begin(), ::tolower);
          ans+=x+" ";
        }
        ans=ans.substr(0,n);
        ans[0]=toupper(ans[0]);
        return ans;
        
    }
};
