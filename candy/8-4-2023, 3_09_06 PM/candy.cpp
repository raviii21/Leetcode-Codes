// Link: https://leetcode.com/problems/candy

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: candy
 *  RUNTIME: 17 ms
 *  MEMORY: 17.9 MB
 *  DATE: 8-4-2023, 3:09:06 PM
 *
 */

// Solution:

class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        vector<int> v(n,1);
        for(int i=1; i<n; i++){
           if(ratings[i]>ratings[i-1])
            v[i]=v[i-1]+1;
        }
        for(int i=n-2; i>=0; i--){
            if(ratings[i]>ratings[i+1]){
                if(v[i]<=v[i+1])
                 v[i]=v[i+1]+1;
            }
        }

        int ans=0;
        for(auto it: v) ans+=it;
        return ans;
    }
};
