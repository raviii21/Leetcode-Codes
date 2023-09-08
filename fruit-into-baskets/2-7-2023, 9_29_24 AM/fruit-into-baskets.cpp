// Link: https://leetcode.com/problems/fruit-into-baskets

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: fruit-into-baskets
 *  RUNTIME: 229 ms
 *  MEMORY: 76.4 MB
 *  DATE: 2-7-2023, 9:29:24 AM
 *
 */

// Solution:

class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();
        unordered_map <int,int> m;
        int ans=0;
        int flag=0;

        for(int i=0; i<n; i++){
          m[fruits[i]]++;
          if(m.size() > 2){
              m.erase(fruits[i]);
              int x=0;
              for(auto it: m) x+=it.second;

              ans=max(ans,x);
              while(m.size()!=1){
                  if(m[fruits[flag]] == 1) m.erase(fruits[flag]);
                  else m[fruits[flag]]--;
                  flag++;
              }
              m[fruits[i]]++;
          }
        }
        int x=0;
        for(auto it:m) x+=it.second;
        ans=max(ans,x);
        return ans;
    }
};
