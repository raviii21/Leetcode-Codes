// Link: https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: lowest-common-ancestor-of-a-binary-tree
 *  RUNTIME: 21 ms
 *  MEMORY: 14.3 MB
 *  DATE: 2-6-2023, 6:51:19 PM
 *
 */

// Solution:

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lca(TreeNode* root,TreeNode* a,TreeNode* b){
        if(root == NULL) return NULL;
        if(root==a || root==b) return root;

        TreeNode* left = lca(root->left,a,b);
        TreeNode* right=lca(root->right,a,b);

        if(left == NULL) return right;
        if(right == NULL) return left;

        return root;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* ans=lca(root,p,q);
        return ans;
    }
};
