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
    bool isSymmetric(TreeNode* root) {
        if(root->left==NULL && root->right==NULL)
        {
            return true;
        }
        
        queue<pair<TreeNode*,int>>q1,q2;
        vector<pair<int,int>>v1,v2;
        
        if(root->left!=NULL)
        {
            q1.push({root->left,1});
            v1.push_back({root->left->val,1});
        }
        if(root->right!=NULL)
        {
            q2.push({root->right,1});
            v2.push_back({root->right->val,1});
        }
        
        while(!q1.empty()){
            TreeNode* temp=q1.front().first;
            int x=q1.front().second;
            q1.pop();
            
            if(temp->right!=NULL)
            {
                q1.push({temp->right,x+1});
                v1.push_back({temp->right->val,x+1});
            }
            else
            {
                v1.push_back({0,0});
            }
            if(temp->left!=NULL)
            {
                q1.push({temp->left,x+1});
                v1.push_back({temp->left->val,x+1});
            }
            else
            {
                v1.push_back({0,0});
            }
            
        }
        
        while(!q2.empty()){
            TreeNode* temp=q2.front().first;
            int x=q2.front().second;
            q2.pop();
            
            if(temp->left!=NULL)
            {
                q2.push({temp->left,x+1});
                v2.push_back({temp->left->val,x+1});
            }
            else
            {
                v2.push_back({0,0});
            }
            if(temp->right!=NULL)
            {
                q2.push({temp->right,x+1});
                v2.push_back({temp->right->val,x+1});
            }
            else
            {
                v2.push_back({0,0});
            }
            
            
        }
        
        if(v1.size()!=v2.size())
        {
            return false;
        }
        
        for(int i=0;i<v1.size();i++)
        {
            if(v1[i].first!=v2[i].first || v1[i].second!=v2[i].second)
            {
                return false;
            }
        }
        
        return true;
        
    }
};
