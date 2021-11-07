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
    void trv(TreeNode* root,vector<int>&ans)
    {
        if(root==NULL)
        {
            return;
        }
        
        
        trv(root->left,ans);
        
        ans.push_back(root->val);
        
        trv(root->right,ans);
        
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;
        trv(root,ans);
        
        return ans;
        
    }
};
