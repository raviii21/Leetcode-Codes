// Link: https://leetcode.com/problems/binary-tree-right-side-view

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: binary-tree-right-side-view
 *  RUNTIME: 5 ms
 *  MEMORY: 12 MB
 *  DATE: 2-2-2023, 5:30:32 PM
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
    void Rightview(TreeNode* root, vector<int> &ans, int level){
          
          if(root == NULL) return ;
          
          if(level == ans.size()) 
           ans.push_back(root->val);

          Rightview(root->right,ans,level+1);
          Rightview(root->left,ans,level+1);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        Rightview(root,ans,0);
        return ans;
    }
};
