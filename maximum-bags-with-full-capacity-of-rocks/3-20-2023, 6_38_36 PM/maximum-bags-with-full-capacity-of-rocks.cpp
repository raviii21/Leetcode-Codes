// Link: https://leetcode.com/problems/maximum-bags-with-full-capacity-of-rocks

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: maximum-bags-with-full-capacity-of-rocks
 *  RUNTIME: 199 ms
 *  MEMORY: 89.5 MB
 *  DATE: 3-20-2023, 6:38:36 PM
 *
 */

// Solution:

class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int n = capacity.size();
        vector<int> v;
        int ans=0;
        for(int i=0; i<n; i++){
           if(capacity[i]-rocks[i] == 0) ans++;
           else v.push_back(capacity[i]-rocks[i]);
        } 
        sort(v.begin(),v.end());
        for(int i=0; i<v.size(); i++){
            if(v[i] <= additionalRocks){
                ans++;
                additionalRocks-=v[i];
            }else{
                break;
            }
        }
        return ans;
    }
};
