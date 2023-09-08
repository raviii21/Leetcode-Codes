// Link: https://leetcode.com/problems/linked-list-random-node

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: linked-list-random-node
 *  RUNTIME: 22 ms
 *  MEMORY: 16.7 MB
 *  DATE: 3-10-2023, 9:59:36 AM
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
    int len=0;
    ListNode* temp;
public:
    Solution(ListNode* head) {
        temp = head;
        ListNode* tem = temp;
        while(tem){
            len++;
            tem=tem->next;
        }
    }
    
    int getRandom() {
        int random = rand()%len;
        ListNode* tem = temp;
        for(int i=0; i<random; i++) tem=tem->next;
        return tem->val;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */
