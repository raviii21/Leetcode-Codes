// Link: https://leetcode.com/problems/reduce-array-size-to-the-half

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: reduce-array-size-to-the-half
 *  RUNTIME: 196 ms
 *  MEMORY: 78.4 MB
 *  DATE: 2-15-2023, 11:37:41 PM
 *
 */

// Solution:

class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int,int> m;
        for(auto it: arr){
            m[it]++;
        }
        vector<int> v;
        for(auto it: m){
            v.push_back(it.second);
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        int ans=0;
        int sum=0;
        for(int it=0; it<v.size(); it++){
           sum+=v[it];
           ans++;
           if(sum>=(n/2)) break;
           
        }
        return ans;
    }
};
