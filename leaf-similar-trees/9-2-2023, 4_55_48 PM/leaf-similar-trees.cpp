// Link: https://leetcode.com/problems/leaf-similar-trees

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: leaf-similar-trees
 *  RUNTIME: 0 ms
 *  MEMORY: 12.8 MB
 *  DATE: 9-2-2023, 4:55:48 PM
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
   void leaforder(TreeNode* root,vector<int> &ans){
       if(root->left == NULL && root->right == NULL) ans.push_back(root->val);
       if(root->left!=NULL) leaforder(root->left,ans);
       if(root->right!=NULL) leaforder(root->right,ans);
   }
   bool solution(TreeNode* root1, TreeNode* root2){
       vector<int> v1,v2;
       leaforder(root1,v1);
       leaforder(root2,v2);
       if(v1 == v2) return true;
       return false;
   }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        return solution(root1,root2);

    }
};
