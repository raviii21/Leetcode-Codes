// Link: https://leetcode.com/problems/partition-list

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: partition-list
 *  RUNTIME: 8 ms
 *  MEMORY: 10.2 MB
 *  DATE: 8-15-2023, 10:54:50 AM
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
    ListNode* partition(ListNode* head, int x) {
        ListNode* start = new ListNode(0);
        ListNode* end = new ListNode(0);
        
        ListNode* temp1 = start;
        ListNode* temp2 = end;
        while(head){
            if(head->val < x){
                temp1->next = head;
                temp1 = head;
            }else{
                temp2->next = head;
                temp2 = head;
            }
            head = head->next;
        }
        temp2->next = NULL;
        temp1->next = end->next;
        return start->next;
    }
};
