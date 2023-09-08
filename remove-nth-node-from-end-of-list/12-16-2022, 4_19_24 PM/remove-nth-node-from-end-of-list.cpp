// Link: https://leetcode.com/problems/remove-nth-node-from-end-of-list

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: remove-nth-node-from-end-of-list
 *  RUNTIME: 3 ms
 *  MEMORY: 10.7 MB
 *  DATE: 12-16-2022, 4:19:24 PM
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* prev=new ListNode();
        prev->next=head;
        ListNode* fast = prev;
        ListNode* slow = prev;

        for(int i=0; i<n; ++i)
         fast = fast->next;

        while(fast->next!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        ListNode* temp = slow->next;
        slow->next = slow->next->next;
        delete temp;
        return prev->next;
        
    }
};
