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
    vector<int> largestValues(TreeNode* root) {
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
        
        
        int x=v[v.size()-1].second;
        int index=0;
        
        for(int i=0;i<=x;i++)
        {
            priority_queue<int,vector<int>>pq;
            while(index<v.size() && v[index].second==i)
            {
                pq.push(v[index].first);
                index++;
            }
            if(!pq.empty())
            {
                ans.push_back(pq.top());
            }
        }
        
        return ans;
    }
};
