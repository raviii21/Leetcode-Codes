// Link: https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: delete-the-middle-node-of-a-linked-list
 *  RUNTIME: 1116 ms
 *  MEMORY: 294.8 MB
 *  DATE: 6-19-2023, 10:10:51 PM
 *
 */

// Solution:

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
int size(ListNode* head){
       int size = 1;
       ListNode* temp = head;
       while(temp!=NULL && temp->next!=NULL){
           size++;
           temp = temp->next;
       }
       return size;
}
ListNode* middle(ListNode* head){
    ListNode* slow = head;
    ListNode* fast = head;
    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
    ListNode* deleteMiddle(ListNode* head) {
        int numOfNodes = size(head);
        if(numOfNodes == 1) return NULL;
        ListNode* mid = middle(head);
        int prev = numOfNodes/2;
        int next = prev+2;
        
        cout << prev << " " << next;
        ListNode* temp = head;
        ListNode* prevNode;
        // ListNode* nextNode;
        int count=1;
        while(temp!=NULL && temp->next!=NULL){
             if(count == prev){
             prevNode = temp;
             break;
             } 
               count++;
               temp = temp->next;
        }
        prevNode->next = prevNode->next->next;
        delete mid;
        return head;
        
    }
};





