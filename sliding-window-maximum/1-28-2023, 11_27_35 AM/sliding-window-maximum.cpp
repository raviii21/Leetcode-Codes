// Link: https://leetcode.com/problems/sliding-window-maximum

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: sliding-window-maximum
 *  RUNTIME: 366 ms
 *  MEMORY: 134.7 MB
 *  DATE: 1-28-2023, 11:27:35 AM
 *
 */

// Solution:

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& a, int k) {
       deque <int> q;
       vector<int> ans;
       for(int i=0; i<a.size(); i++){
           if(!q.empty() && q.front()==i-k) 
              q.pop_front();
           while(!q.empty() && a[q.back()]<a[i])
            q.pop_back();

           q.push_back(i);
           if(i>=k-1) ans.push_back(a[q.front()]); 
       }
       return ans;
    }
};
