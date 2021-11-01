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
        queue<pair<TreeNode*,int>>q;
        vector<pair<int,int>>v;
        vector<vector<int>>ans;
        
        if(root==NULL)
        {
            return ans;
        }
        
        q.push({root,0});
        v.push_back({root->val,0});
        
        while(!q.empty())
        {
            TreeNode* temp=q.front().first;
            int x=q.front().second;
            q.pop();
            
            if(temp->left!=NULL)
            {
                q.push({temp->left,x+1});
                v.push_back({temp->left->val,x+1});
            }
            if(temp->right!=NULL)
            {
                q.push({temp->right,x+1});
                v.push_back({temp->right->val,x+1});
            }
            
        }
        
        for(int i=0;i<=v[v.size()-1].second;i++)
        {
            vector<int>temp;
            for(int j=0;j<v.size();j++)
            {
                if(v[j].second==i)
                {
                    temp.push_back(v[j].first);
                }
            }
            
            ans.push_back(temp);
        }
        
        return ans;
        
    }
};
