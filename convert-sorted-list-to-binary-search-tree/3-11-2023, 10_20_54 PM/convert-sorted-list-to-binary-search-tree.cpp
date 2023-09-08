// Link: https://leetcode.com/problems/convert-sorted-list-to-binary-search-tree

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: convert-sorted-list-to-binary-search-tree
 *  RUNTIME: 422 ms
 *  MEMORY: 359.3 MB
 *  DATE: 3-11-2023, 10:20:54 PM
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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    TreeNode* solution(vector<int> v,int l,int h){
        if(l > h) return NULL;
        int m = l+(h-l)/2;
        TreeNode* root = new TreeNode(v[m]);
        root->left = solution(v,l,m-1);
        root->right = solution(v,m+1,h);
        return root;
    }
    TreeNode* sortedListToBST(ListNode* head) {
        vector<int> v;
        ListNode* temp = head;
        while(temp){
            v.push_back(temp->val);
            temp=temp->next;
        }
        return solution(v,0,v.size()-1);
    }
};
