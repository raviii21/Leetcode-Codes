// Link: https://leetcode.com/problems/reducing-dishes

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: reducing-dishes
 *  RUNTIME: 0 ms
 *  MEMORY: 7.9 MB
 *  DATE: 3-29-2023, 8:55:41 AM
 *
 */

// Solution:

class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        int n = satisfaction.size();
        sort(satisfaction.begin(),satisfaction.end());
        vector<int> temp;
        int ans=0;
        for(int i=0; i<n; i++){
            ans+=(i+1)*satisfaction[i];
        }

        for(int i=0; i<n; i++){
            int j=1;
            int tem=0;
            for(int k=i+1; k<n; k++){
              tem+=(j++)*satisfaction[k];
            }
            ans=max(ans,tem);
        }
        return ans;
    }
};
