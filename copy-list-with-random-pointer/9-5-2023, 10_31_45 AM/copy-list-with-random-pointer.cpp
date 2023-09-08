// Link: https://leetcode.com/problems/copy-list-with-random-pointer

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: copy-list-with-random-pointer
 *  RUNTIME: 7 ms
 *  MEMORY: 11.2 MB
 *  DATE: 9-5-2023, 10:31:45 AM
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
        Node* it = head;
        Node* frnt = head;
        while(it){
            frnt = it->next;

            Node* temp = new Node(it->val);
            it->next = temp;
            temp->next = frnt;
            it = frnt;
        }

        it = head;
        while(it){
            if(it->random != NULL){
              it->next->random  = it->random->next;
            }
            it = it->next->next;
        }

        it = head;
        Node* tmp = new Node(0);
        Node* tmp1 = tmp;
        while(it){
            frnt = it->next->next;

            tmp1->next = it->next;
            it->next = frnt;
            tmp1 = tmp1->next;
            it = frnt;
        }
        return tmp->next;
    }
};
