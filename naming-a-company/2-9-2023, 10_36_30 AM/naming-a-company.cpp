// Link: https://leetcode.com/problems/naming-a-company

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: naming-a-company
 *  RUNTIME: 795 ms
 *  MEMORY: 83.9 MB
 *  DATE: 2-9-2023, 10:36:30 AM
 *
 */

// Solution:

class Solution {
public:
    long long distinctNames(vector<string>& ideas) {
        long long ans=0;
        int n=ideas.size();
        unordered_set <string> s;
        vector<vector<int>> arr(26,vector<int>(26,0));

        for(int i=0; i<n; i++) 
           s.insert(ideas[i]);

        for(int i=0; i<n; i++){
            string curr=ideas[i];
            char x=curr[0];

            for(char ch='a'; ch<='z'; ch++){
                curr[0]=ch;
                if(s.find(curr) == s.end()){
                    arr[x-'a'][ch-'a']++;
                }
            }
        }  

        for(int i=0; i<26; i++){
            for(int j=0; j<26; j++){
                ans+=(long long)arr[i][j]*(long long)arr[j][i] ;
            }
        } 

        return ans;
    }
};
