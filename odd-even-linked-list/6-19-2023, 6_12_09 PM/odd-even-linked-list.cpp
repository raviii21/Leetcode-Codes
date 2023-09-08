// Link: https://leetcode.com/problems/odd-even-linked-list

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: odd-even-linked-list
 *  RUNTIME: 19 ms
 *  MEMORY: 10.4 MB
 *  DATE: 6-19-2023, 6:12:09 PM
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
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL) return NULL;
       ListNode* odd = head;
       ListNode* even = head->next;
       ListNode* evenhead = even;
       while(even!=NULL && even->next!=NULL){
           odd->next = even->next;
           odd = odd->next;
           even->next = odd->next;
           even = even->next;
       }
       odd->next = evenhead;
       return head;
    }
};
