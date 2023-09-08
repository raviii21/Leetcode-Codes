// Link: https://leetcode.com/problems/smallest-number-in-infinite-set

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: smallest-number-in-infinite-set
 *  RUNTIME: 70 ms
 *  MEMORY: 35.5 MB
 *  DATE: 4-25-2023, 9:22:31 AM
 *
 */

// Solution:

class SmallestInfiniteSet {
public:
    set<int> s;
    priority_queue<int,vector<int>,greater<int>> q;
    int curr;

    SmallestInfiniteSet() {
        curr=1;
    }
    
    int popSmallest() {
        int ans;
        if(q.empty()){
            ans = curr;
            curr++;
        }else{
            ans = q.top();
            s.erase(ans);
            q.pop();
        }
        return ans;
    }
    
    void addBack(int num) {
        if(s.find(num)!=s.end() || num >= curr) return;

        s.insert(num);
        q.push(num);
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */
