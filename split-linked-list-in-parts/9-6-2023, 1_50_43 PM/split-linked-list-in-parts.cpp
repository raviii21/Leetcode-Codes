// Link: https://leetcode.com/problems/split-linked-list-in-parts

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: split-linked-list-in-parts
 *  RUNTIME: 4 ms
 *  MEMORY: 9 MB
 *  DATE: 9-6-2023, 1:50:43 PM
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
        int ans=0;
        ListNode* temp = head;
        while(temp){
            ans++;
            temp = temp->next;
        }
        return ans;
    }
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int n = size(head);
        vector<ListNode*> ans;
        int x = n%k,y=n/k;
        ListNode* temp = head;

        while(temp){
            ListNode* node = new ListNode(0);
            ListNode* curr = node;

            for(int i=0; i<y; i++){
                curr->next = temp;
                curr = temp;
                temp = temp->next;
            }
            if(x!=0){
                curr->next = temp;
                curr = temp;
                temp = temp->next;
                x--;
            }
            curr->next = NULL;
            ans.push_back(node->next);
        }
        if(n<k){
            for(int i=0; i<k-n; i++) ans.push_back(NULL);
        }
        return ans;
    }
};
