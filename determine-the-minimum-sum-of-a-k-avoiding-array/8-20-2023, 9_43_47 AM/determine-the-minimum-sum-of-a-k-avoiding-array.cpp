// Link: https://leetcode.com/problems/determine-the-minimum-sum-of-a-k-avoiding-array

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: determine-the-minimum-sum-of-a-k-avoiding-array
 *  RUNTIME: 19 ms
 *  MEMORY: 12.6 MB
 *  DATE: 8-20-2023, 9:43:47 AM
 *
 */

// Solution:

class Solution {
public:
    int minimumSum(int n, int k) {
        set<int> s;
        vector<int> v;
        int i=1;
        while(v.size()!=n){
            if(s.find(k-i)==s.end()){
                v.push_back(i);
                s.insert(i);
            }
            i++;
        }
        int ans=0;
        for(int it : v) ans+=it;
        return ans;
    }
};
