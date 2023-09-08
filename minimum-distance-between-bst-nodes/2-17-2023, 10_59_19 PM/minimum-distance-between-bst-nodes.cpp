// Link: https://leetcode.com/problems/minimum-distance-between-bst-nodes

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: minimum-distance-between-bst-nodes
 *  RUNTIME: 8 ms
 *  MEMORY: 9.8 MB
 *  DATE: 2-17-2023, 10:59:19 PM
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

  int flag = -1;
  void inorder(TreeNode* root, int& ans) {
    if (root == nullptr)
      return;

    inorder(root->left, ans);
    if (flag >= 0) ans = min(ans, root->val - flag);
    flag = root->val;
    inorder(root->right, ans);
  }
  int minDiffInBST(TreeNode* root) {
    int ans = INT_MAX;
    inorder(root, ans);
    return ans;
  }
};
