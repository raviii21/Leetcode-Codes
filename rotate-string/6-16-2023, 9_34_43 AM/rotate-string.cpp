// Link: https://leetcode.com/problems/rotate-string

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: rotate-string
 *  RUNTIME: 4 ms
 *  MEMORY: 6.5 MB
 *  DATE: 6-16-2023, 9:34:43 AM
 *
 */

// Solution:

class Solution {
public:
    bool rotateString(string s, string goal) {
        int n=s.size();
        int m=goal.size();
        if(n!=m) return false;
        if(s==goal) return true;
        string a,b;
        int flag=0;
        for(int i=0; i<n; i++){
          if(s[i]==goal[0]) {
             b=s.substr(i,n-1);
             b+=a;
             if(b==goal) return true;
          }
          a+=s[i];
        }
        // for(int i=0; i<a.size(); i++) cout << a[i] << " ";
        // cout << endl;
        // for(int i=0; i<b.size(); i++) cout << b[i] << " ";
        // b+=a;
        // if(b==goal)
        // return true;
        return false;
        //bbba cddceeb
        //cddceebbba
        // ceeb bbbacdd

    }
};
