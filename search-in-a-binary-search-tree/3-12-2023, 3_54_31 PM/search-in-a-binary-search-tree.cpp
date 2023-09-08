// Link: https://leetcode.com/problems/search-in-a-binary-search-tree

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: search-in-a-binary-search-tree
 *  RUNTIME: 47 ms
 *  MEMORY: 34.7 MB
 *  DATE: 3-12-2023, 3:54:31 PM
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
    TreeNode* searchBST(TreeNode* root, int val) {
        while(root!=NULL){
            if(val > root->val){
                root = root -> right;
            }else if(val < root->val){
                root = root-> left;
            }else 
             return root;
        }
        return NULL;
    }
};
