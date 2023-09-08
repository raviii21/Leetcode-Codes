// Link: https://leetcode.com/problems/groups-of-special-equivalent-strings

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: groups-of-special-equivalent-strings
 *  RUNTIME: 9 ms
 *  MEMORY: 8.8 MB
 *  DATE: 2-6-2023, 9:21:54 AM
 *
 */

// Solution:

class Solution {
public:
    int numSpecialEquivGroups(vector<string>& words) {
        
        set< pair<string,string> > s;
        for(auto it : words){
            string x,y;
            for(int i=0; i<it.size(); i++){
                if(i%2==0) x+=it[i];
                else y+=it[i];
            }

            sort(x.begin(),x.end());
            sort(y.begin(),y.end());
            s.insert({x,y});
        }
        return s.size();
    }
};
