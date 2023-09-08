// Link: https://leetcode.com/problems/double-a-number-represented-as-a-linked-list

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: double-a-number-represented-as-a-linked-list
 *  RUNTIME: 279 ms
 *  MEMORY: 131.8 MB
 *  DATE: 8-14-2023, 12:04:57 PM
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
    ListNode* reverse(ListNode* head){
        ListNode* prev = NULL;
        while(head){
            ListNode* next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }
        return prev;
    }
    ListNode* mul(ListNode* head){
        int carry=0;
        int num;
        ListNode* ans = new ListNode();
        ListNode* temp = ans;
        while(head){
            num = (head->val)*2;
            int dig = num%10;
            num/=10;
            temp->val = dig+carry;
            carry = num;
            ListNode* node = new ListNode();
            temp->next = node;
            temp = temp->next;
            head = head->next;
        }
        while(num){
            int dig = num%10;
            num/=10;
            temp->val = dig;
            ListNode* node = new ListNode();
            temp->next = node;
            temp=temp->next;
        }
        return ans;
    }
    ListNode* doubleIt(ListNode* head) {
        head = reverse(head);
        head = mul(head);
        head = reverse(head);
        return head->next;
    }
};
