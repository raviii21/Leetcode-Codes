// Link: https://leetcode.com/problems/linked-list-cycle-ii

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: linked-list-cycle-ii
 *  RUNTIME: 22 ms
 *  MEMORY: 9.8 MB
 *  DATE: 3-9-2023, 8:48:30 AM
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
    ListNode *detectCycle(ListNode *head) {
        ListNode *temp = head;
        map<ListNode*,int> m;
        while(temp!=NULL)
        {
            if(m.find(temp)!=m.end())
             return temp;
            m[temp]++;
            temp = temp->next;
        }

        return NULL;
    }
};
