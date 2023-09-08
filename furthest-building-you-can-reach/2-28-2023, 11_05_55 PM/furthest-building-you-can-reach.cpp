// Link: https://leetcode.com/problems/furthest-building-you-can-reach

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: furthest-building-you-can-reach
 *  RUNTIME: 116 ms
 *  MEMORY: 54.1 MB
 *  DATE: 2-28-2023, 11:05:55 PM
 *
 */

// Solution:

class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        int n = heights.size();
        priority_queue<int> q;
        int ans=n-1;
        // long long int sum=0;
        // for(int i=n-1; i>=1; i--){
        //     if(heights[i]-heights[i-1] > 0){
        //      q.push(heights[i]-heights[i-1]);
        //      sum+=heights[i]-heights[i-1] ;
        //     }
        // } 

        // unordered_set<int> s; 
        // while(sum<=bricks) {
        //     int x = q.top();
        //     q.pop();
        //     sum-=x;
        // }
        // while(!q.empty()){
        //     int x = q.top();
        //     q.pop();
        //     s.insert(x);
        // } 

        // int ans = 0;
        // for(int i=0; i<n-1; i++){
        //    int x = heights[i+1] - heights[i];
        //    if(bricks==0 && ladders==0){
        //        break;
        //    }  
        //    if(x > 0) {
        //        if(s.count(x)) bricks-=x;
        //        else ladders-=1;
        //    }
        //    ans++;
        // }

        // return ans;  

         int x=0; 
        for(int i=0; i<n-1; i++){
            x = heights[i+1]-heights[i];
            if(x > 0){
                bricks-=x;
                q.push(x);

                if(bricks < 0){
                    int y=q.top();
                    q.pop();
                    bricks+=y;
                    ladders-=1;
                }
                if(ladders < 0){
                    ans=i;
                    break;
                }
            }
        }

        return ans;
    }
};
