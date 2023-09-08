// Link: https://leetcode.com/problems/balanced-binary-tree

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: balanced-binary-tree
 *  RUNTIME: 10 ms
 *  MEMORY: 20.8 MB
 *  DATE: 8-6-2023, 3:25:00 PM
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
        if(root == nullptr) return 0;

        int leftsize = depth(root->left);
        if(leftsize==-1) return -1;
        int rightsize = depth(root->right);
        if(rightsize==-1) return -1;

        if(abs(leftsize - rightsize) > 1) return -1;

        return max(leftsize, rightsize) + 1;
    }
    bool isBalanced(TreeNode* root) {
        if(depth(root)!=-1) return true;
        return false;
    }
};
