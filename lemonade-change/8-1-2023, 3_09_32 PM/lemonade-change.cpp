// Link: https://leetcode.com/problems/lemonade-change

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: lemonade-change
 *  RUNTIME: 79 ms
 *  MEMORY: 83.4 MB
 *  DATE: 8-1-2023, 3:09:32 PM
 *
 */

// Solution:

class Solution {
public:
    bool lemonadeChange(vector<int>& a) {
        int n = a.size();
        if(a[0]!=5) return false;
        map<int,int> m;
        m[5]=0;
        m[10]=0;
        int ans=true;
        for(int i=0; i<n; i++){
            m[a[i]]++;
            if(a[i]==10){
                if(m[5]==0){
                    ans=false;
                    break;
                }else m[5]--;
            }
            if(a[i]==20){
                if(m[10]!=0){
                    if(m[5]!=0){
                        m[10]--;
                        m[5]--;
                    }else{
                        ans=false;
                        break;
                    }
                }else{
                    if(m[5]>=3){
                        m[5]-=3;
                    }else{
                        ans=false;
                        break;
                    }
                }
            }
        }
        return ans;
    }
};
