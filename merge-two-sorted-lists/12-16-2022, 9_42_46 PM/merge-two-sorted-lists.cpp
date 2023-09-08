// Link: https://leetcode.com/problems/merge-two-sorted-lists

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: merge-two-sorted-lists
 *  RUNTIME: 10 ms
 *  MEMORY: 14.6 MB
 *  DATE: 12-16-2022, 9:42:46 PM
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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1==NULL) return l2;
        if(l2==NULL) return l1;
        if(l1->val > l2->val) {
            std:: swap(l1,l2);
        }
         ListNode* ans = l1;
        while(l1!=NULL && l2!=NULL){
          ListNode* temp = NULL;

          while(l1!=NULL && l1->val <= l2->val){
              temp=l1;
              l1=l1->next;
          }
          temp->next = l2;
          std:: swap(l1,l2);
        }
        return ans;
    }
};
