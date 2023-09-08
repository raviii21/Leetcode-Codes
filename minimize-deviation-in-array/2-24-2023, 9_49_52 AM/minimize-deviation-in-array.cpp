// Link: https://leetcode.com/problems/minimize-deviation-in-array

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: minimize-deviation-in-array
 *  RUNTIME: 551 ms
 *  MEMORY: 56.7 MB
 *  DATE: 2-24-2023, 9:49:52 AM
 *
 */

// Solution:

class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
        priority_queue<int> q;
        int n = nums.size();
        int mini = INT_MAX;
        int ans = INT_MAX;
        for(int i: nums){
            if(i%2) i*=2;
            q.push(i); 
            mini = min(mini,i);
        } 

        while(true){
            int maxi = q.top();
            q.pop();
            ans = min(ans,maxi-mini);

            if(maxi%2) break;
            maxi/=2;
            q.push(maxi); 
            mini = min(mini,maxi);
        }

        return ans;

    }
};
