// Link: https://leetcode.com/problems/maximum-depth-of-binary-tree

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: maximum-depth-of-binary-tree
 *  RUNTIME: 0 ms
 *  MEMORY: 19 MB
 *  DATE: 2-16-2023, 8:48:37 AM
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
    int depth(TreeNode* root){
        if(root == NULL) return 0;
        return max(depth(root->left) , depth(root->right)) + 1;
    }
    int maxDepth(TreeNode* root) {
        return depth(root);
    }
};
