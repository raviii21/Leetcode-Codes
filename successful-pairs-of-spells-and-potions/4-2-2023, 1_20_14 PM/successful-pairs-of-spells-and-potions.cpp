// Link: https://leetcode.com/problems/successful-pairs-of-spells-and-potions

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: successful-pairs-of-spells-and-potions
 *  RUNTIME: 284 ms
 *  MEMORY: 97.2 MB
 *  DATE: 4-2-2023, 1:20:14 PM
 *
 */

// Solution:

class Solution {
public:
    vector<int> successfulPairs(vector<int>& a, vector<int>& b, long long success) {
        int n = a.size();
        int m = b.size();
        sort(b.begin(),b.end());
        vector<int> ans(n);

        for(int i=0; i<n; i++){
            int l=0,h=m-1;

            while(l<=h){
                int mid=(l+h)/2;
                if((long long)b[mid]*a[i]>=success){ 
                    if(mid==0){
                        ans[i]=m;
                        break;
                    }
                    if((long long)b[mid-1]*a[i] < success){
                         ans[i]=m-mid;
                         break;
                    }else h=mid-1; 
                }else l=mid+1;
                
            }
        }
        return ans;
    }
};
