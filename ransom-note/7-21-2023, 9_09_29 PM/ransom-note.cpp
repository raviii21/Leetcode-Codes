// Link: https://leetcode.com/problems/ransom-note

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: ransom-note
 *  RUNTIME: 26 ms
 *  MEMORY: 8.9 MB
 *  DATE: 7-21-2023, 9:09:29 PM
 *
 */

// Solution:

class Solution {
public:
    bool canConstruct(string a, string b) {
        int n = a.size();
        int m = b.size();

        unordered_map<char,int> mp;
        for(int i=0; i<m; i++) mp[b[i]]++;

        bool ans = true;
        for(int i=0; i<n; i++){
            if(mp.find(a[i]) != mp.end()){
                mp[a[i]]--;
                if(mp[a[i]] == 0) mp.erase(a[i]);
            }else{
                ans=false;
                break;
            }
        }
        return ans;
    }
};
