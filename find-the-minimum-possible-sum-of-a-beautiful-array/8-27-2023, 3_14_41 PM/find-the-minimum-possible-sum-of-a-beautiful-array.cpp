// Link: https://leetcode.com/problems/find-the-minimum-possible-sum-of-a-beautiful-array

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: find-the-minimum-possible-sum-of-a-beautiful-array
 *  RUNTIME: 107 ms
 *  MEMORY: 49.9 MB
 *  DATE: 8-27-2023, 3:14:41 PM
 *
 */

// Solution:

class Solution {
public:
    long long minimumPossibleSum(int n, int target) {
        vector<int> v;
        unordered_set<int> s;
        int i=1;
        while(v.size()!=n){
            if(s.find(i)==s.end()){
                v.push_back(i);
                s.insert(target-i);
            }
            i++;
        }
        long long ans=0;
        for(int i=0; i<n; i++){
            ans+=v[i];
        }
        return ans;
        
    }
};
