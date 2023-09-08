// Link: https://leetcode.com/problems/text-justification

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: text-justification
 *  RUNTIME: 0 ms
 *  MEMORY: 7.6 MB
 *  DATE: 8-24-2023, 12:38:53 PM
 *
 */

// Solution:

class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<string>ans;
        int n=words.size();
        int i=0;
        while(i<n){
            int j=i+1;
            int c=words[i].size();
            int wc=words[i].size();
            while(j<n && c+words[j].size()+1<=maxWidth){
                c+=words[j].size()+1;
                wc+=words[j].length();
                j++;
            }
           if(j==n||(j-i)==1){
               string st="";
               for(int p=i;p<j;p++){
                   st+=words[p];
                   if(p!=j-1)
                   st+=' ';
               }
               int ts=maxWidth-st.size();
               for(int k=0;k<ts;k++){
                   st+=' ';
               }
               ans.push_back(st);
               i=j-1;
           }
           else{
             int tw=j-i;
             int ts=maxWidth-wc;
             int es=ts/(tw-1);
             int extra=ts%(tw-1);
             string st="";
             for(int p=i;p<j;p++){
                 st+=words[p];
                 if(extra>0){
                    st+=' ';
                    extra--;
                 }
                 if(p!=j-1){
                for(int k=0;k<es;k++){
                   st+=' ';
               }
                 }
             }
             ans.push_back(st);
              i=j-1;
           }
           i++;
        }
        return ans;
    }
};
