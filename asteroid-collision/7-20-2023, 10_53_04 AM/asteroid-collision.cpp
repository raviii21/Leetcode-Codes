// Link: https://leetcode.com/problems/asteroid-collision

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: asteroid-collision
 *  RUNTIME: 15 ms
 *  MEMORY: 17.8 MB
 *  DATE: 7-20-2023, 10:53:04 AM
 *
 */

// Solution:

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        
        for (int asteroid : asteroids) {
            int flag = 1;
            while (!st.empty() && (st.top() > 0 && asteroid < 0)) {
                if (abs(st.top()) < abs(asteroid)) {
                    st.pop();
                    continue;
                }
                else if (abs(st.top()) == abs(asteroid)) {
                    st.pop();
                }
                flag = 0;
                break;
            }
            
            if (flag)st.push(asteroid);
        }
        vector<int> ans (st.size());
        for (int i = ans.size()-1; i>=0; i--){
            ans[i] = st.top();
            st.pop();
        }
        
        return ans;
    }
};
