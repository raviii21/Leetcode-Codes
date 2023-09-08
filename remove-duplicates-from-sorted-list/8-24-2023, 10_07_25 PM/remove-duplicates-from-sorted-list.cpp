// Link: https://leetcode.com/problems/remove-duplicates-from-sorted-list

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: remove-duplicates-from-sorted-list
 *  RUNTIME: 13 ms
 *  MEMORY: 11.7 MB
 *  DATE: 8-24-2023, 10:07:25 PM
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
    ListNode* deleteDuplicates(ListNode* head) {
         ListNode* temp = head;
         while(temp!=NULL && temp->next!=NULL){
             if(temp->next->val == temp->val){
                 temp->next = temp->next->next;
             }else{
                 temp = temp->next;
             }
         }
         return head;
    }
};
