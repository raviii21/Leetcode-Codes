// Link: https://leetcode.com/problems/majority-element

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: majority-element
 *  RUNTIME: 27 ms
 *  MEMORY: 19.6 MB
 *  DATE: 12-17-2022, 2:59:56 PM
 *
 */

// Solution:

class Solution {
public:
    int majorityElement(vector<int>& a) {
        int count=1;
        int ans = 0;

        for(int i=1; i<a.size(); i++){
            if(a[i]==a[ans]) count++;
            else count--;
            if(count==0){
                ans=i;
                count=1;
            }
        }

        return a[ans];
    }
};
