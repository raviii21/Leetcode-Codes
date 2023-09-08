// Link: https://leetcode.com/problems/add-two-numbers-ii

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: add-two-numbers-ii
 *  RUNTIME: 39 ms
 *  MEMORY: 73.6 MB
 *  DATE: 7-17-2023, 6:41:08 PM
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int> s1,s2;
        int carry=0;
        while(l1!=NULL){
          s1.push(l1->val);
          l1 = l1->next;
        }
        while(l2!=NULL){
          s2.push(l2->val);
          l2 = l2->next;
        }

        ListNode* ans = NULL;
        while(!s1.empty() || !s2.empty() || carry!=0){
          int dig1,dig2;
          if(!s1.empty()) dig1=s1.top();
          else dig1=0;

          if(!s2.empty()) dig2=s2.top();
          else dig2=0;

          int sum = dig1+dig2+carry;
          int digit  = sum%10;
          carry = sum/10;

          ListNode* node = new ListNode(digit);
          node->next = ans;
          ans = node;
          if(!s1.empty()) s1.pop();
          if(!s2.empty()) s2.pop();
        }
        return ans;
    }
};
