// Link: https://leetcode.com/problems/remove-letter-to-equalize-frequency

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: remove-letter-to-equalize-frequency
 *  RUNTIME: 2 ms
 *  MEMORY: 6.4 MB
 *  DATE: 3-26-2023, 5:46:02 PM
 *
 */

// Solution:

class Solution {
public:
    bool equalFrequency(string s) {
        int n = s.size();
        bool ans = false;
        map<char,int> m;
        for(int i=0; i<n; i++) m[s[i]]++;
        
        // set<int> st;
        // for(auto it : m) st.insert(it.second);
        
        // if(st.size()<=2){
        //     vector<int> v;
        //     for(auto it : st) v.push_back(it);
             
        //      if(v.size()==2){
        //        int x = abs(v[0]-v[1]);
        //        if(x==1) ans=true;  
        //     }else{
        //         if(v[0]==1) ans=true;
        //     }
        // }  

        for(int i=0; i<n; i++){
            int p=m[s[i]];
            if(p==1) m.erase(s[i]);
            else m[s[i]]--;
            vector<int> v;
            for(auto it : m) v.push_back(it.second);

            int x=0;
            int y=v.size();
            for(int i=0; i<y-1;i++){
                if(v[i]==v[i+1]) x++;
            }
            v.clear();
            if(x==(y-1)) {
                ans=true;
                break;
            }else m[s[i]]++;
        }
        return ans;
    }
};
