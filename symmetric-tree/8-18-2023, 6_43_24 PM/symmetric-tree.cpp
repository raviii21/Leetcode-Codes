// Link: https://leetcode.com/problems/symmetric-tree

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: symmetric-tree
 *  RUNTIME: 2 ms
 *  MEMORY: 16.5 MB
 *  DATE: 8-18-2023, 6:43:24 PM
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
        // if(left == NULL && right!=NULL) return false;
        // if(left != NULL && right==NULL) return false;
        if(left == NULL || right == NULL) return false;
        if(left->val != right->val) return false;

        return solution(left->left,right->right)&&solution(left->right,right->left); 
    }
    bool isSymmetric(TreeNode* root) {
       return solution(root->left,root->right);
    }
};
