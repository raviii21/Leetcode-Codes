// Link: https://leetcode.com/problems/sort-list

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: sort-list
 *  RUNTIME: 257 ms
 *  MEMORY: 74 MB
 *  DATE: 6-19-2023, 10:37:31 PM
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
    ListNode* merge(ListNode* first, ListNode* second){
        ListNode* x = new ListNode(0);
        ListNode* curr = x;

        while(first != NULL && second != NULL){
            if(first->val <= second->val){
                curr->next = first;
                first = first->next;
            }else{
                curr->next = second;
                second = second->next;
            }
            curr = curr -> next;
        }

        if(first!= NULL){
            curr->next = first;
            first = first->next;
        }
        if(second!= NULL){
            curr->next = second;
            second = second->next;
        }
        return x->next;
    }
    ListNode* sortList(ListNode* head) {
       if(head == NULL || head->next == NULL) return head;

       ListNode* temp;
       ListNode* slow = head;
       ListNode* fast = head;
       while(fast!=NULL && fast->next!=NULL){
           temp = slow;
           slow = slow->next;
           fast = fast->next->next;
       }
       temp->next = NULL;
       ListNode* first = sortList(head);
       ListNode* second = sortList(slow);

       return merge(first,second);
    }
};
