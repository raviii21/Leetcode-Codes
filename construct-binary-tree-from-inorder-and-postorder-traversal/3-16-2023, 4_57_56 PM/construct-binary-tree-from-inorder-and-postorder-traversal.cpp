// Link: https://leetcode.com/problems/construct-binary-tree-from-inorder-and-postorder-traversal

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: construct-binary-tree-from-inorder-and-postorder-traversal
 *  RUNTIME: 30 ms
 *  MEMORY: 26.1 MB
 *  DATE: 3-16-2023, 4:57:56 PM
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
    int k;

    TreeNode* solution(vector<int>& inorder,vector<int>& postorder,int i,int j){
        if(j < i) return NULL;
        
        int rootVal = postorder[--k];
        int rootind;

        TreeNode *root = new TreeNode(rootVal);
        for(int x = i; x <= j; x++){
            if(inorder[x] == rootVal){
                rootind = x;
                break;
            }
        }
        root->right = solution(inorder, postorder, rootind+1, j);
        root->left = solution(inorder, postorder, i, rootind-1);
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        k = postorder.size();
        return solution(inorder, postorder, 0, k-1);
    }
};
