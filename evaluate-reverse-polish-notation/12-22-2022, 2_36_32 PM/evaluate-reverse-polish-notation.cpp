// Link: https://leetcode.com/problems/evaluate-reverse-polish-notation

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: evaluate-reverse-polish-notation
 *  RUNTIME: 7 ms
 *  MEMORY: 12 MB
 *  DATE: 12-22-2022, 2:36:32 PM
 *
 */

// Solution:

class Solution {
public:

    bool isOperator(string c){
        if(c=="+" || c=="-" || c=="/" || c=="*")
         return true;

        return false; 
    }
    int evalRPN(vector<string>& a) {
        stack<long long int> s;
        int n=a.size();
        for(int i=0; i<n; i++){
           if(!isOperator(a[i])){
               s.push(stoi(a[i]));
           }else{
               int second=s.top();
               s.pop();
               int first=s.top();
               s.pop();
               long long int ans;
               if(a[i]=="+") ans=first+second;
               else if(a[i]=="-") ans=first-second;
               else if(a[i]=="/") ans=first/second;
               else ans=first*second;

               s.push(ans);
           }
        }
        return s.top();
    }
};
