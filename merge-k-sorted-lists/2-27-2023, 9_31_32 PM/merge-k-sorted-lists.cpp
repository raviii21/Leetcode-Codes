// Link: https://leetcode.com/problems/merge-k-sorted-lists

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: merge-k-sorted-lists
 *  RUNTIME: 19 ms
 *  MEMORY: 14 MB
 *  DATE: 2-27-2023, 9:31:32 PM
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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n = lists.size();
        vector<int> v;
        for(auto it : lists){
            while(it){
                v.push_back(it->val);
                it = it->next;
            }
        } 
        sort(v.begin(),v.end());
        ListNode* list = new ListNode();
        ListNode* temp = list;
        for(int i=0; i<v.size(); i++){
            ListNode* node = new ListNode(v[i]);
            temp->next = node;
            temp=temp->next;
        }
        return list->next;
    }
};
