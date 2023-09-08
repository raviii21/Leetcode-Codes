// Link: https://leetcode.com/problems/reverse-linked-list

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: reverse-linked-list
 *  RUNTIME: 11 ms
 *  MEMORY: 8.4 MB
 *  DATE: 12-16-2022, 4:02:04 PM
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
    ListNode* reverseList(ListNode* head) {
        ListNode* prev =NULL;
        while(head!=NULL){
            ListNode* next = head->next;
            head->next=prev;
            prev=head;
            head=next;
        }
        return prev;
    }
};
