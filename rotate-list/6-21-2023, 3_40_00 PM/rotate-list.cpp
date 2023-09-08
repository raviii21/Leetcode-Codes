// Link: https://leetcode.com/problems/rotate-list

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: rotate-list
 *  RUNTIME: 11 ms
 *  MEMORY: 11.6 MB
 *  DATE: 6-21-2023, 3:40:00 PM
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
    ListNode* rotateRight(ListNode* head, int k) {

        int n = size(head);
        if(k>n) k=k%n;
        k=n-k;
        if(k==0 || n==1) return head;
        ListNode* temp = head;
        ListNode* curr = head;
        ListNode* next = head->next;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        
        ListNode* last = temp;
        for(int i=1; i<=k; i++){
            last->next = curr;
            curr->next = NULL;
            last = last->next;
            curr = next;
            next = next->next;
        }
        return curr;
    }
};
