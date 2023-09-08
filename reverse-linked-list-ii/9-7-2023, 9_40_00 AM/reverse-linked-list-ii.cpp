// Link: https://leetcode.com/problems/reverse-linked-list-ii

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: reverse-linked-list-ii
 *  RUNTIME: 4 ms
 *  MEMORY: 7.5 MB
 *  DATE: 9-7-2023, 9:40:00 AM
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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
       if(head == NULL) return NULL;
       ListNode* prev =  NULL;
       ListNode* temp = head;
       while(left>1){
           prev = temp;
           temp = temp -> next;
           left--;
           right--;
       }
       ListNode* first = prev;
       ListNode* second = temp;
       ListNode* dummy = NULL;
       while(right>0){
           dummy = temp->next;
           temp->next = prev;
           prev = temp;
           temp =  dummy;
           right--;
       }

       if(first!=NULL) first->next = prev;
       else head= prev;
       second->next = temp;
       return head;
    }
};
