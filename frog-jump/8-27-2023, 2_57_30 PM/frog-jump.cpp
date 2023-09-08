// Link: https://leetcode.com/problems/frog-jump

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: frog-jump
 *  RUNTIME: 225 ms
 *  MEMORY: 54.2 MB
 *  DATE: 8-27-2023, 2:57:30 PM
 *
 */

// Solution:

class Solution {
public:
    bool canCross(vector<int>& stones) {
        int n = stones.size();
        map<int, set<int>> m;
        m[1]={1};
        for(int i=1; i<n; i++){
            for(auto it: m[stones[i]]){
                 m[stones[i]+it].insert(it);
                 m[stones[i]+it-1].insert(it-1);
                 m[stones[i]+it+1].insert(it+1);
            }
        }

        if(m[stones[n-1]].size()) return true;
        return false;
    }
};
