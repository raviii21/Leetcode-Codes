// Link: https://leetcode.com/problems/koko-eating-bananas

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: koko-eating-bananas
 *  RUNTIME: 47 ms
 *  MEMORY: 19 MB
 *  DATE: 3-8-2023, 10:15:49 AM
 *
 */

// Solution:

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int low=1,high=*max_element(piles.begin(),piles.end());
        int ans=-1;
        while(low<=high){
            int m = (low+high)/2;
            long long currHour=0;
            for(int i=0; i<n; i++){
                currHour+=ceil(piles[i]/double(m));
            }
            if(currHour > h) low=m+1;
            else{
                ans=m;  
                high=m-1;
            } 
        }
        return ans;
    }
};

