// Link: https://leetcode.com/problems/min-stack

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: min-stack
 *  RUNTIME: 21 ms
 *  MEMORY: 16.2 MB
 *  DATE: 7-23-2023, 2:32:11 PM
 *
 */

// Solution:

class MinStack {
public:
   
    stack<int> s,mini;
    MinStack() {
        
    }
    
    void push(int val) {
        s.push(val);
        if(mini.empty() || getMin()>=val) mini.push(val);
    }
    
    void pop() {
        int topmost = s.top();
        s.pop();
        if(topmost == mini.top()) 
         mini.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() { 
        return mini.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
