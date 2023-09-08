// Link: https://leetcode.com/problems/delete-node-in-a-linked-list

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: delete-node-in-a-linked-list
 *  RUNTIME: 14 ms
 *  MEMORY: 7.7 MB
 *  DATE: 2-17-2023, 11:10:03 PM
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
    void deleteNode(ListNode* node) {
        node->val=node->next->val;
        node->next=node->next->next;
    }
};
