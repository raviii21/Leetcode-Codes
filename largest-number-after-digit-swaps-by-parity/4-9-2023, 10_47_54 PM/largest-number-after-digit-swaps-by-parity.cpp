// Link: https://leetcode.com/problems/largest-number-after-digit-swaps-by-parity

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: largest-number-after-digit-swaps-by-parity
 *  RUNTIME: 2 ms
 *  MEMORY: 6 MB
 *  DATE: 4-9-2023, 10:47:54 PM
 *
 */

// Solution:

class Solution {
public:
    int largestInteger(int num) {
        string s = to_string(num);
        string out;
        vector<int> q,t;
        while(num){
            int x = num%10;
            if(x%2==0)  q.push_back(x);
            else t.push_back(x);
            num/=10;
        }
        sort(q.begin(),q.end());
        sort(t.begin(),t.end());

        int i = q.size()-1;
        int j = t.size()-1;
        for(int k=0; k<s.size(); k++){
            if(s[k]%2==0){
            int x=q[i--];
            out+=to_string(x);
            } else{
                int x = t[j--];
                out+=to_string(x);
            }
        }
        int ans = stoi(out);
        return ans;

    }
}; 
