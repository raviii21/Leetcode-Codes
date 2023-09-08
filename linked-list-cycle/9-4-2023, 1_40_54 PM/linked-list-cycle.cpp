// Link: https://leetcode.com/problems/linked-list-cycle

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: linked-list-cycle
 *  RUNTIME: 11 ms
 *  MEMORY: 8.2 MB
 *  DATE: 9-4-2023, 1:40:54 PM
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
    bool hasCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast) return true;
        }
        return false;
    }
};
