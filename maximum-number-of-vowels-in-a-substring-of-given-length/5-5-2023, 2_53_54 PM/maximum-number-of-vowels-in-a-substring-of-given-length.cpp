// Link: https://leetcode.com/problems/maximum-number-of-vowels-in-a-substring-of-given-length

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: maximum-number-of-vowels-in-a-substring-of-given-length
 *  RUNTIME: 21 ms
 *  MEMORY: 10 MB
 *  DATE: 5-5-2023, 2:53:54 PM
 *
 */

// Solution:

class Solution {
public:
    int maxVowels(string s, int k) {
        int n = s.size();
        int ans = INT_MIN;
        int count=0;
        for(int i=0; i<k;i++){
          if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
              count++;
          }
        }
        ans=max(ans,count);
        for(int i=k; i<n; i++){
            int flag=0;
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                flag++;
            }
            if(s[i-k]=='a' || s[i-k]=='e' || s[i-k]=='i' || s[i-k]=='o' || s[i-k]=='u')      {
              flag--;
            }
            count+=flag;
            ans=max(ans,count);
        }
        return ans;
    }
};
