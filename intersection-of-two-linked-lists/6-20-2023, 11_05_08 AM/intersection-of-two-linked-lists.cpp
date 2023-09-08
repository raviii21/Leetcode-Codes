// Link: https://leetcode.com/problems/intersection-of-two-linked-lists

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: intersection-of-two-linked-lists
 *  RUNTIME: 40 ms
 *  MEMORY: 14.5 MB
 *  DATE: 6-20-2023, 11:05:08 AM
 *
 */

// Solution:

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int size1=size(headA);
        int size2=size(headB);
        int diff = abs(size1-size2);

        ListNode* d1=headA;
        ListNode* d2=headB;
        if(size1 > size2){
            for(int i=1; i<=diff; i++) d1 = d1->next;
        }else{
            for(int i=1; i<=diff; i++) d2 = d2->next;
        }

        while(d1!=NULL && d2!=NULL){
            if(d1 == d2){
                return d1;
            }
            d1 = d1->next;
            d2 = d2->next;
        }
        return NULL;
    }
};
