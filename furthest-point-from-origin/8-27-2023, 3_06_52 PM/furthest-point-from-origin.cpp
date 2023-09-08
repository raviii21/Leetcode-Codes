// Link: https://leetcode.com/problems/furthest-point-from-origin

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: furthest-point-from-origin
 *  RUNTIME: 0 ms
 *  MEMORY: 6.1 MB
 *  DATE: 8-27-2023, 3:06:52 PM
 *
 */

// Solution:

class Solution {
public:
    int furthestDistanceFromOrigin(string s) {
        int n = s.size();
        int nr=0,nl=0;
        for(int i=0; i<n; i++){
            if(s[i]=='L') nl++;
            else if(s[i]=='R') nr++;
        }
        char ch;
        if(nr>=nl) ch='R';
        else ch='L';
        int ans=0;
        for(int i=0; i<n; i++){
            if(s[i]=='_') s[i]=ch;
            if(s[i]=='L') ans--;
            else ans++;
        }
        return abs(ans);
    }
};
