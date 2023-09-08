// Link: https://leetcode.com/problems/symmetric-tree

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: symmetric-tree
 *  RUNTIME: 11 ms
 *  MEMORY: 16.5 MB
 *  DATE: 3-13-2023, 9:33:52 AM
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
    bool solution (TreeNode* left, TreeNode* right){
        if(left == NULL && right == NULL) return true;
        if(left == NULL && right!=NULL) return false;
        if(left != NULL && right==NULL) return false;
        if(left->val != right->val) return false;

        return solution(left->left,right->right)&&solution(left->right,right->left); 
    }
    bool isSymmetric(TreeNode* root) {
       return solution(root->left,root->right);
    }
};
