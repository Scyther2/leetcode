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
    vector<int> rightSideView(TreeNode* root) {
        queue<pair<TreeNode*,int>>q;
        vector<pair<int,int>>v;
        vector<int>ans;
        
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
            
            
            if(temp->right!=NULL)
            {
                q.push({temp->right,x+1});
                v.push_back({temp->right->val,x+1});
            }
            if(temp->left!=NULL)
            {
                q.push({temp->left,x+1});
                v.push_back({temp->left->val,x+1});
            }
        }
        
        int cur=0;
        
        ans.push_back(v[0].first);
        
        for(int i=1;i<v.size();i++)
        {
            if(v[i].second!=cur)
            {
                ans.push_back(v[i].first);
                cur=v[i].second;
            }
        }
        
        return ans;
    }
};
