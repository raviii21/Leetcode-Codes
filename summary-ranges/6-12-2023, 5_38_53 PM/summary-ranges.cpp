// Link: https://leetcode.com/problems/summary-ranges

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: summary-ranges
 *  RUNTIME: 0 ms
 *  MEMORY: 6.9 MB
 *  DATE: 6-12-2023, 5:38:53 PM
 *
 */

// Solution:

class Solution {
public:
    vector<string> summaryRanges(vector<int>& a) {
        int n = a.size();
        vector<string> ans;
        for(int i=0; i<n; i++){
            int first = a[i];
            while(i+1 < n && a[i]+1==a[i+1]) i++;

            string f = to_string(first);
            if(first!=a[i]) {
                string num=to_string(a[i]);
                ans.push_back(f + "->" +num);
            }else ans.push_back(f);
        }
        return ans;
    }
};
