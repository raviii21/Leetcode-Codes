// Link: https://leetcode.com/problems/implement-queue-using-stacks

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: implement-queue-using-stacks
 *  RUNTIME: 0 ms
 *  MEMORY: 7 MB
 *  DATE: 7-23-2023, 2:18:25 PM
 *
 */

// Solution:

class MyQueue {
public:
    stack<int> s1,s2;
    MyQueue() {
        
    }
    
    void push(int x) {
        s1.push(x);
    }
    
    int pop() {
        while(s1.size()>1){
            s2.push(s1.top());
            s1.pop();
        }

        int ans = s1.top();
        s1.pop();
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
        return ans;
    }
    
    int peek() {
        while(s1.size()>1){
            s2.push(s1.top());
            s1.pop();
        }

        int ans = s1.top();
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
        return ans;
    }
    
    bool empty() {
        if(s1.size()==0) return true;

        return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
