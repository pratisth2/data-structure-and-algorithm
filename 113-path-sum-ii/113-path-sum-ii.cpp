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
    void targetsum(TreeNode*root, int targetSum,int sum,vector<int>v, vector<vector<int>>&res)
    {

       if(root->left==NULL && root->right==NULL)
       {
           sum+=root->val;
           v.push_back(root->val);
           if(sum==targetSum)
           {
               res.push_back(v);    
           }
           return;
       }
        sum+=root->val;
        v.push_back(root->val);
         
        if(root->left!=NULL)
        {
            targetsum(root->left, targetSum,sum,v,res);
        }
          if(root->right!=NULL)
        {
            targetsum(root->right, targetSum,sum,v,res);
        }
        return;
    }
  
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>res;
        if(root==NULL)
        {
            return res;
        }
        vector<int>v;
        int sum=0;
         targetsum(root,targetSum,sum,v,res);
        return res;
        
        
    }
};