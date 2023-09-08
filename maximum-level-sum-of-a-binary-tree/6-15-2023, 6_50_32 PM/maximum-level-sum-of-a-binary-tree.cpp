// Link: https://leetcode.com/problems/maximum-level-sum-of-a-binary-tree

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: maximum-level-sum-of-a-binary-tree
 *  RUNTIME: 203 ms
 *  MEMORY: 107.2 MB
 *  DATE: 6-15-2023, 6:50:32 PM
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
    int maxLevelSum(TreeNode* root) {
        vector<int> ans;
        queue<TreeNode*> q;

        if(root == NULL) return 0;

        q.push(root);
        while(!q.empty()){
            int size = q.size();

            int curr=0;
            for(int i=0; i<size; i++){
                TreeNode* top= q.front();
                curr+=top->val;
                if(top->left != NULL) q.push(top->left);
                if(top->right != NULL) q.push(top->right);
                q.pop();
            }
            ans.push_back(curr);
        }

        return distance(ans.begin(), max_element(ans.begin(),ans.end()))+1;
    }
};
