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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
                vector<vector<int>>ans;
        if(root==NULL)
        {
            return {};
        }
        queue<TreeNode*>q;
        q.push(root);
        q.push(NULL);
        vector<int>v;
        while(!q.empty())
        {
           TreeNode *t=q.front();
            if(t!=NULL)
            cout<<t->val;
                q.pop();
            if(t!=NULL)
            {
                v.push_back(t->val);
                if(t->left!=NULL)
                    q.push(t->left);
                if(t->right!=NULL)
                    q.push(t->right);
                 }
            else
            {
                ans.push_back(v);
                v.clear();
                if(!q.empty())
                    q.push(NULL);
            }
          
        }
        reverse(ans.begin(),ans.end());
            return ans;
        }
        
    
};