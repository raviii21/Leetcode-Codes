// Link: https://leetcode.com/problems/binary-tree-inorder-traversal

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: binary-tree-inorder-traversal
 *  RUNTIME: 4 ms
 *  MEMORY: 10.4 MB
 *  DATE: 1-29-2023, 6:23:03 PM
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
    vector<int> ans;
    void inorder(TreeNode* root){
     if(root == nullptr) return;
        
        inorderTraversal(root->left);
        ans.push_back(root->val);
        inorderTraversal(root->right);
    }
public:
    vector<int> inorderTraversal(TreeNode* root) {
        inorder(root);
        return ans;
    }
};
