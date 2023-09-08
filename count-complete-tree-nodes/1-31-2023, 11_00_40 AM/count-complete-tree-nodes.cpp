// Link: https://leetcode.com/problems/count-complete-tree-nodes

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: count-complete-tree-nodes
 *  RUNTIME: 35 ms
 *  MEMORY: 30.8 MB
 *  DATE: 1-31-2023, 11:00:40 AM
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
    int solve(TreeNode* root){
        if(root == NULL) return 0;
        return solve(root->left) + solve(root->right) + 1;
    }
    int countNodes(TreeNode* root) {
        return solve(root);
    }
};
