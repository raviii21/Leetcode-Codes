// Link: https://leetcode.com/problems/jump-game-iv

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: jump-game-iv
 *  RUNTIME: 204 ms
 *  MEMORY: 75.9 MB
 *  DATE: 3-5-2023, 4:13:20 PM
 *
 */

// Solution:

class Solution {
public:
    int minJumps(vector<int>& arr) {
        int n = arr.size();
        int ans = 0;
        if (n <= 1) return 0;

        unordered_map<int, vector<int>> m;
        for (int i = 0; i < n; i++)  m[arr[i]].push_back(i);
        
        queue<int> q;
        vector<bool> visited(n);
        q.push(0);
        visited[0] = true;
        while (!q.empty()) {
            int size = q.size();
            while (size--) {
                int currInd = q.front();
                q.pop();
                if (currInd==n - 1) return ans;
                vector<int>& v = m[arr[currInd]];
                v.push_back(currInd - 1);
                v.push_back(currInd + 1);
                for (int it : v) {
                    if (it >= 0 && it < n && !visited[it]) {
                        q.push(it);
                        visited[it] = true;
                    }
                } 
                v.clear();
            }
            ans++;
        }
        return -1;
    }
};
