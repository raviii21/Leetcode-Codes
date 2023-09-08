// Link: https://leetcode.com/problems/sum-root-to-leaf-numbers

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: sum-root-to-leaf-numbers
 *  RUNTIME: 0 ms
 *  MEMORY: 9.3 MB
 *  DATE: 3-14-2023, 9:37:43 AM
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
    void solution(TreeNode* curr, int& totalsum, int prev){
        if(curr == NULL) return ;
        prev = (prev*10)+ (curr->val);
        if(curr->left ==NULL && curr->right ==NULL) {
            totalsum+=prev;
            return ;
        }
        solution(curr->left,totalsum,prev);
        solution(curr->right,totalsum,prev);
    }

    int sumNumbers(TreeNode* root) {
        int ans = 0;
        solution(root,ans,0);
        return ans;
    }
};
