// Link: https://leetcode.com/problems/ipo

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: ipo
 *  RUNTIME: 241 ms
 *  MEMORY: 82.1 MB
 *  DATE: 2-23-2023, 6:04:23 PM
 *
 */

// Solution:

class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        int n = capital.size();
        vector<pair<int,int>> v;
        priority_queue <int> q;

        for(int i=0; i<n; i++) v.push_back(make_pair(capital[i],profits[i]));

        sort(v.begin(),v.end());
        int i=0;
        while(k--){
             while(v[i].first <= w && i < n){
                  q.push(v[i].second);
                  i++;
             }

            if (q.empty()) break; 
            w += q.top();
            q.pop();
        }

        return w;
    }
};
