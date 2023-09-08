// Link: https://leetcode.com/problems/minimum-depth-of-binary-tree

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: minimum-depth-of-binary-tree
 *  RUNTIME: 199 ms
 *  MEMORY: 146.7 MB
 *  DATE: 9-5-2023, 10:42:05 AM
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

        if(root->left == NULL) return depth(root->right)+1;
        if(root->right == NULL) return depth(root->left)+1;
        
        return (min(depth(root->left),depth(root->right))+1);
    }
    int minDepth(TreeNode* root) {
        return depth(root);
    }
};
