// Link: https://leetcode.com/problems/binary-tree-paths

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: binary-tree-paths
 *  RUNTIME: 9 ms
 *  MEMORY: 13.9 MB
 *  DATE: 2-7-2023, 5:23:40 PM
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
    void path(TreeNode* root, vector<string> &ans,string s){
        if(root == NULL) return;
        if(root->left || root->right) s+=(to_string(root->val)+"->");
        else{
            s+=(to_string(root->val));
            ans.push_back(s);
        }

        path(root->left,ans,s);
        path(root->right,ans,s);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        string s="";
        path(root,ans,s);
        return ans;
    }
};
