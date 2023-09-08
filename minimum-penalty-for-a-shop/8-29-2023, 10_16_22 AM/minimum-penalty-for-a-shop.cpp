// Link: https://leetcode.com/problems/minimum-penalty-for-a-shop

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: minimum-penalty-for-a-shop
 *  RUNTIME: 49 ms
 *  MEMORY: 28.8 MB
 *  DATE: 8-29-2023, 10:16:22 AM
 *
 */

// Solution:

class Solution {
public:
    int bestClosingTime(string customers) {
        int n = customers.size();
        vector<int> yes(n,0);
        vector<int> no(n,0);
        for(int i=0; i<n; i++){
            if(customers[i]=='Y') yes[i]=1;
            else no[i]=1;
        }
        int sum1=0,sum2=0;
        for(int i=0; i<n; i++){
           sum1+=yes[i];
           sum2+=no[i];
           yes[i]=sum1;
           no[i]=sum2;
        }

        vector<int> v;
        v.push_back(yes[n-1]);
        for(int i=0; i<n; i++){
            int penalty = yes[n-1]-yes[i]+no[i];
            v.push_back(penalty);
        }
        int minimum = *min_element(v.begin(),v.end());
        int ans;
        for(int i=0; i<v.size(); i++){
            if(v[i]==minimum) {
                ans=i;
                break;
            }
        }
        return ans;
    }
};
