// Link: https://leetcode.com/problems/remove-k-digits

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: remove-k-digits
 *  RUNTIME: 35 ms
 *  MEMORY: 8 MB
 *  DATE: 7-24-2023, 8:39:31 PM
 *
 */

// Solution:

class Solution {
public:
    string removeKdigits(string num, int k) {
        int n=num.size();
        string ans="0";
        if(k==n) return ans;
        
        int n0=0,n1=1;
        for(int i=0;i<n;i++){
            if(num[i]=='0') n0++;
            else n1++;
        }
        if(k>=n1) return ans;
        int i=0;
        while(i<num.size()){
            if(num[i]>num[i+1]){
                num.erase(i,1);
                if(i!=0) i--;
                k--;
            }else i++;
            if(k==0) break;
        }
        if(k!=0){
            int j=num.size()-1;
            num.erase(j,1);
        }
        while(num[0]=='0'){
            num.erase(0,1);
        }
        if(num.size()==0) return ans;
        return num;
    }
};
