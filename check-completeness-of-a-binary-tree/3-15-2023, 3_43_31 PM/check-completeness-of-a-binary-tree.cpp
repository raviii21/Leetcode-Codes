// Link: https://leetcode.com/problems/check-completeness-of-a-binary-tree

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: check-completeness-of-a-binary-tree
 *  RUNTIME: 10 ms
 *  MEMORY: 10.6 MB
 *  DATE: 3-15-2023, 3:43:31 PM
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
    bool isCompleteTree(TreeNode* root) { 
        if(root == NULL) return true;

        int flag = 0;
        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            int size = q.size();

            for(int i=0;i<size;i++){
                TreeNode* top = q.front();
                q.pop();
                if(top == NULL) flag=1;
                else{
                    if(flag) return false;
                    q.push(top->left);
                    q.push(top->right);
                }
            }
        }
        return true;  

    }
};
