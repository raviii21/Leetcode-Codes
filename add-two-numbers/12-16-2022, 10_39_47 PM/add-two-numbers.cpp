// Link: https://leetcode.com/problems/add-two-numbers

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: add-two-numbers
 *  RUNTIME: 47 ms
 *  MEMORY: 71.5 MB
 *  DATE: 12-16-2022, 10:39:47 PM
 *
 */

// Solution:

// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans =new ListNode();
        ListNode* temp = ans;
        int carry=0;
        while(l1!=NULL || l2!=NULL || carry){
            int sum = 0;
            if(l1!=NULL){
               sum+=l1->val;
               l1 = l1 -> next;
            }
            if(l2!=NULL){
               sum+=l2->val;
               l2 = l2 -> next;
            }

            sum+=carry;
            carry=sum/10;
            ListNode* node = new ListNode(sum%10);
            temp->next =node;
            temp = temp->next;
        }

        return ans->next;
    }
};
