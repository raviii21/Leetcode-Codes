// Link: https://leetcode.com/problems/number-of-smooth-descent-periods-of-a-stock

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: number-of-smooth-descent-periods-of-a-stock
 *  RUNTIME: 214 ms
 *  MEMORY: 126.3 MB
 *  DATE: 3-25-2023, 11:31:07 PM
 *
 */

// Solution:

class Solution {
public:
    long long getDescentPeriods(vector<int>& a) {
        long long n = a.size();
        long long ans = n;
        vector<long long> v;
        vector<long long> r;
        if(n==1) return ans;
        for(int i=0; i<n-1; i++) v.push_back(a[i]-a[i+1]);

        // for(int i=0; i<v.size(); i++) cout << v[i] << " ";
         
        long long flag=0;
        for(int i=0; i<v.size(); i++){
           if(v[i]==1) flag++;
           else{
               if(flag > 0){
               r.push_back(flag+1);
               } 
               flag=0;
           }
        } 
        long long w = v.size();
        if(v[w-1]==1 ) {
           r.push_back(flag+1); 
        }
        // for(int i=0; i<r.size(); i++){
        //     cout << r[i] << " ";
        // }
        
        for(int i=0; i<r.size(); i++){
            long long x = r[i]-2;
            while(x>0){
                ans+=r[i]-x;
                x--;
            }
            ans++;
        }
        return ans;

    }
};
