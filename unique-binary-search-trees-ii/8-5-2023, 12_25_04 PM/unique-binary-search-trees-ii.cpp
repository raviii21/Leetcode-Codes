// Link: https://leetcode.com/problems/unique-binary-search-trees-ii

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: unique-binary-search-trees-ii
 *  RUNTIME: 11 ms
 *  MEMORY: 15.7 MB
 *  DATE: 8-5-2023, 12:25:04 PM
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
     vector<TreeNode*> solution(int start, int end){
        if(start>end) return {NULL};
        if(start==end) return {new TreeNode(start)};
        
        vector<TreeNode*> ans;
        for(int i=start;i<=end;i++){
            vector<TreeNode*> left=solution(start,i-1);
            vector<TreeNode*> right=solution(i+1,end);
            
            for(TreeNode* l : left){
                for(TreeNode* r : right){
                    TreeNode* root=new TreeNode(i);
                    root->left=l;
                    root->right=r;
                    
                    ans.push_back(root);
                }
            }
        }
        return ans;
    }
    vector<TreeNode*> generateTrees(int n) {
       return solution(1,n);
    }
};
