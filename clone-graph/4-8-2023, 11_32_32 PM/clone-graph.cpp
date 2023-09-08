// Link: https://leetcode.com/problems/clone-graph

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: clone-graph
 *  RUNTIME: 0 ms
 *  MEMORY: 8.9 MB
 *  DATE: 4-8-2023, 11:32:32 PM
 *
 */

// Solution:

/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    unordered_map<Node*,Node*> m;
    Node* cloneGraph(Node* node) {
        if(node == NULL) return NULL;
        if(m.find(node) == m.end()){
         m[node] = new Node(node -> val, {}); 

         for(auto adj: node -> neighbors) 
           m[node] -> neighbors.push_back(cloneGraph(adj)); 
            
        }
        return m[node];
        
    }
};
