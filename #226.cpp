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
    TreeNode* fun(TreeNode* root)
    {
        if(root==NULL)
        {
            return root;
        }
        fun(root->left);
        fun(root->right);
        
        TreeNode* temp;
        temp=root->left;
        root->left=root->right;
        root->right=temp;
        
        return root;
    }
    TreeNode* invertTree(TreeNode* root) {
        
        fun(root);
        
        return root;
        
    }
};
