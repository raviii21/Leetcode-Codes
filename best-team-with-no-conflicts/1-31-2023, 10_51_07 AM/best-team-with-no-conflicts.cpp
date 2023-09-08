// Link: https://leetcode.com/problems/best-team-with-no-conflicts

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: best-team-with-no-conflicts
 *  RUNTIME: 207 ms
 *  MEMORY: 19.9 MB
 *  DATE: 1-31-2023, 10:51:07 AM
 *
 */

// Solution:

class Solution {
public:
    int bestTeamScore(vector<int>& scores, vector<int>& ages) {
        int n=ages.size();
        vector<int> ans (n,0);
        vector<pair<int,int>> v;
        for(int i=0; i< n; i++){
            v.push_back({ages[i],scores[i]});
        }
        sort(v.begin(),v.end());

        for(int i=0; i<n; i++){
          ans[i]=v[i].second;

          for(int j=0; j<i; j++){
              if(v[i].second >= v[j].second)
               ans[i]=max(ans[i],ans[j]+v[i].second);
          }
        } 

        int answer=INT_MIN;
        for(int i=0; i<ans.size(); i++)
            answer=max(answer,ans[i]);
        
        return answer;
    }
};
