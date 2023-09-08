// Link: https://leetcode.com/problems/find-words-that-can-be-formed-by-characters

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: find-words-that-can-be-formed-by-characters
 *  RUNTIME: 55 ms
 *  MEMORY: 20.4 MB
 *  DATE: 2-4-2023, 2:57:36 PM
 *
 */

// Solution:

class Solution {
public:
    int countCharacters(vector<string>& v, string chars) {
        int x=v.size();
        int y=chars.size();

       vector<int> charfreq (26,0);
       for(int i=0; i<y; i++)
          charfreq[ chars[i] - 'a' ]++;
        
        int ans=0;
        for(int i=0; i<x; i++){
            int flag=1;

            vector<int> stringfreq (26,0);
            for(int j=0; j<v[i].size(); j++){
                 stringfreq[v[i][j] - 'a']++;
                 if(stringfreq[v[i][j] - 'a'] > charfreq[v[i][j] - 'a']){
                     flag=0;
                     break;
                 }
            }
            if(flag) ans+=v[i].size();
        }

        return ans;
    }
};
