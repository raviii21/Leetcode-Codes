// Link: https://leetcode.com/problems/can-place-flowers

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: can-place-flowers
 *  RUNTIME: 7 ms
 *  MEMORY: 20.3 MB
 *  DATE: 3-20-2023, 8:52:28 AM
 *
 */

// Solution:

class Solution {
public:
    bool canPlaceFlowers(vector<int>& v, int n) {
        int x = v.size();
        int maxPoss=0; 
        bool ans = false;
        if(n==0) return true;
        if(x==1) {
            if(n==1 && v[0]==0){
                return true;
            }
            else 
             return false;
        }
        for(int i=0; i<x; i++){
            if(i==0){
                if(v[i]==0 && v[i+1]==0){
                    maxPoss++;
                    v[i]=1;
                }
            }else if(i==x-1){
                if(v[i]==0 && v[i-1]==0){
                    maxPoss++;
                    v[i]=1;
                }
            }else{
                if(v[i]==0 && v[i+1]==0 && v[i-1]==0){
                    maxPoss++;
                    v[i]=1;
                }
            }
        }
        if(maxPoss >= n) ans=true;
        return ans;
    }
};
