// Link: https://leetcode.com/problems/diameter-of-binary-tree

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: diameter-of-binary-tree
 *  RUNTIME: 11 ms
 *  MEMORY: 20.2 MB
 *  DATE: 2-5-2023, 9:30:29 PM
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
    int diameter(TreeNode* root,int& ans){
        if(root == NULL) return 0;

        int a=diameter(root->left,ans);
        int b=diameter(root->right,ans);

        ans=max(ans,a+b);
        return 1+max(a,b);
    }    
    int diameterOfBinaryTree(TreeNode* root) {
        int ans=0;
        diameter(root,ans);
        return ans;
    }
};
