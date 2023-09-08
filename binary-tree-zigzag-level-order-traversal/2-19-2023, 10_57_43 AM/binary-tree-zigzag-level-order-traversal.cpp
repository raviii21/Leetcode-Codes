// Link: https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: binary-tree-zigzag-level-order-traversal
 *  RUNTIME: 0 ms
 *  MEMORY: 12.2 MB
 *  DATE: 2-19-2023, 10:57:43 AM
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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL) return ans;

        queue<TreeNode*> q;
        q.push(root);
        
        int check=0;
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
            if(check==0){
                  ans.push_back(level);
                  check=1;
            }else{
                reverse(level.begin(),level.end());
                ans.push_back(level);
                check=0;
            }
        }

        return ans;
    }
};
