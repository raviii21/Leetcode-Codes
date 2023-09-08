// Link: https://leetcode.com/problems/contains-duplicate-ii

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: contains-duplicate-ii
 *  RUNTIME: 142 ms
 *  MEMORY: 77.4 MB
 *  DATE: 8-28-2023, 11:29:13 AM
 *
 */

// Solution:

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
        bool ans = false;
        unordered_map<int,int> m;
        for(int i=0; i<n; i++){
            if(m.find(nums[i])!=m.end()){
                // Element is in the map.
                int ind = m[nums[i]];
                if(abs(ind-i)<=k){
                    ans = true;
                    break;
                }else{
                    m[nums[i]]=i;
                }
            }else{
                m[nums[i]] = i;
            }
        }
        return ans;
    }
};
