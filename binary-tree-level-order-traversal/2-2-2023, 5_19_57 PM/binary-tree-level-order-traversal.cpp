// Link: https://leetcode.com/problems/binary-tree-level-order-traversal

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: binary-tree-level-order-traversal
 *  RUNTIME: 0 ms
 *  MEMORY: 12.8 MB
 *  DATE: 2-2-2023, 5:19:57 PM
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
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        vector<vector<int>> ans;
        queue<TreeNode*> q;

        if(root == NULL) return ans;

        q.push(root);

        while(!q.empty()){
            int size = q.size();

            vector<int> level;
            for(int i=0; i<size; i++){
                TreeNode* top= q.front();
                level.push_back(top->val);
                if(top->left != NULL) q.push(top->left);
                if(top->right != NULL) q.push(top->right);
                q.pop();
            }
            ans.push_back(level);
        }
        return ans;
    }
};
