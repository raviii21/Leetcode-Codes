// Link: https://leetcode.com/problems/add-to-array-form-of-integer

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: add-to-array-form-of-integer
 *  RUNTIME: 26 ms
 *  MEMORY: 28.5 MB
 *  DATE: 2-15-2023, 7:20:13 PM
 *
 */

// Solution:

class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int n = num.size();
        int x;
        vector<int> ans;
        for(int i=n-1; i>=0; i--){
           x=k+num[i];
           if(i!=0){
           ans.push_back(x%10);
           k=x/10;
           } 

        }
        while(x!=0){
            int temp = x%10;
            ans.push_back(temp);
            x/=10;
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
