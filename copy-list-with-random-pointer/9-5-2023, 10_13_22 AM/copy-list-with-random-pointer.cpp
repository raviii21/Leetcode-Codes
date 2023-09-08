// Link: https://leetcode.com/problems/copy-list-with-random-pointer

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: copy-list-with-random-pointer
 *  RUNTIME: 7 ms
 *  MEMORY: 11.5 MB
 *  DATE: 9-5-2023, 10:13:22 AM
 *
 */

// Solution:

/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        map<Node*, Node*> m;
        Node* temp = head;
        while(temp){
            Node* node = new Node(temp->val);
            m[temp] = node;
            temp = temp->next;
        }
        Node* temp2=head;
        while(temp2){
            m[temp2]->next = m[temp2->next];
            m[temp2]->random = m[temp2->random];
            temp2 = temp2->next;
        }
        return m[head];
    }
};
