/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
     void findtarget(TreeNode*root, map<TreeNode*,TreeNode*>&parent)
    {
       TreeNode* res=NULL;
        queue<TreeNode*>q;
        q.push(root);
        parent[root]=NULL;  
        while(!q.empty())
        {
          TreeNode* front=q.front();
            q.pop();
            if(front->left!=NULL)
            {
               q.push(front->left);
                parent[front->left]=front;
               
            }
             if(front->right!=NULL)
            {
                  q.push(front->right);
                parent[front->right]=front;
               
            }
        }
      //cout<<res->val;
    }
   void find(TreeNode* root, map<TreeNode*,TreeNode*>&parent, int k, vector<int>&v)
    {
        map<TreeNode*, bool>vis;
        queue<TreeNode*>q;
        q.push(root);
        vis[root]=true;
        while(!q.empty())
        {
            int size=q.size();
            for(int i=0;i<size;i++)
            {
                TreeNode* front=q.front();
                q.pop();
               if(k==0)
               {
                   v.push_back(front->val);
               }
                if(front->left!=NULL && !vis[front->left])
                {
                    q.push(front->left);
                    vis[front->left]=true;
                }
                if(front->right!=NULL && !vis[front->right])
                {
                    q.push(front->right);
                    vis[front->right]=true;
                }
                if(parent[front]!=NULL && !vis[parent[front]])
                {
                    q.push(parent[front]);
                    vis[parent[front]]=true;
                }
            }
            k--;
            
        }
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        map<TreeNode*, TreeNode*>parent;
       findtarget(root,parent);
        vector<int>v;
        find(target,parent,k,v);
        return v;
       
    }
};
