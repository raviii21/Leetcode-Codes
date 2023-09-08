// Link: https://leetcode.com/problems/swap-nodes-in-pairs

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: swap-nodes-in-pairs
 *  RUNTIME: 6 ms
 *  MEMORY: 7.6 MB
 *  DATE: 12-24-2022, 2:09:47 PM
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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL || head->next==NULL)
         return head;

        ListNode* temp = head->next;
        head->next = swapPairs(head->next->next);
        temp->next = head;
        return temp;
    }
};
