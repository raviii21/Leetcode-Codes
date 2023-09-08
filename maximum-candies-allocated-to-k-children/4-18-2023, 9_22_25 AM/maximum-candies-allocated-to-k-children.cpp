// Link: https://leetcode.com/problems/maximum-candies-allocated-to-k-children

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: maximum-candies-allocated-to-k-children
 *  RUNTIME: 256 ms
 *  MEMORY: 84.4 MB
 *  DATE: 4-18-2023, 9:22:25 AM
 *
 */

// Solution:

class Solution {
public:

    bool solution(vector<int>& candies, int m, long long k){
        long long maxi=0;
        for(int i=0; i<candies.size(); i++){
            maxi += candies[i]/m;
        }
        if(maxi >= k) return true;
        else return false;
    }
    int maximumCandies(vector<int>& candies, long long k) {
        int n = candies.size();
        int l = 1,h = *max_element(candies.begin(), candies.end());
        int ans=0;

        while (l<=h){
            int m = (l+h)/2;
            if(solution(candies,m,k)){
                ans = m;
                l=m+1;
            }else h=m-1;
            
        }
        return ans;

    }
};
