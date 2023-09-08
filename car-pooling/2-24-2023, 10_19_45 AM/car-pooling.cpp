// Link: https://leetcode.com/problems/car-pooling

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: car-pooling
 *  RUNTIME: 12 ms
 *  MEMORY: 10.4 MB
 *  DATE: 2-24-2023, 10:19:45 AM
 *
 */

// Solution:

class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<pair<int,int>> v;
        int n = trips.size();
        for(int i=0; i<n; i++){
             v.push_back(make_pair(trips[i][1],trips[i][0])) ;
             v.push_back(make_pair(trips[i][2],(-1)*trips[i][0]) );
        } 

        sort(v.begin(),v.end());
        bool ans = true;
        int curr=0;
        for(int i=0; i<v.size(); i++){
           curr+=v[i].second;
           if(curr > capacity){
               ans = false;
               break;
           }
        } 
        return ans;
    }
};
