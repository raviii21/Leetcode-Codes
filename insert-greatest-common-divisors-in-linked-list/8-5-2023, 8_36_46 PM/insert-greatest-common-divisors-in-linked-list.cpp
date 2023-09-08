// Link: https://leetcode.com/problems/insert-greatest-common-divisors-in-linked-list

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: insert-greatest-common-divisors-in-linked-list
 *  RUNTIME: 54 ms
 *  MEMORY: 30.2 MB
 *  DATE: 8-5-2023, 8:36:46 PM
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
    int size(ListNode* head){
       int size = 1;
       ListNode* temp = head;
       while(temp!=NULL && temp->next!=NULL){
           size++;
           temp = temp->next;
       }
       return size;
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        int n = size(head);
        if(n==1) return head;
        
        ListNode* temp=head;
        ListNode* flag=head->next;
        while(flag){
            int gcd = __gcd(temp->val,flag->val);
            ListNode* node = new ListNode(gcd);
            temp->next = node;
            node->next=flag;
            flag = flag->next;
            temp = temp->next->next;
        }
        return head;
    }
};
