// Link: https://leetcode.com/problems/same-tree

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: same-tree
 *  RUNTIME: 0 ms
 *  MEMORY: 10.1 MB
 *  DATE: 2-3-2023, 9:57:16 AM
 *
 */

// Solution:

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
    bool isSameTree(TreeNode* p, TreeNode* q) {
       if(p==NULL && q==NULL) return true;
       if(p==NULL || q==NULL) return false;
       if(p->val == q->val) return (isSameTree(p->left,q->left) && isSameTree(p->right,q->right));

       return false;
    }
};
