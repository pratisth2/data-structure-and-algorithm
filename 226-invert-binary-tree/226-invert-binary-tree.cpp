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
  
    
    TreeNode* invertTree(TreeNode* root) {
      if(root==NULL)
      {
          return root;
      }
        TreeNode* temp=new TreeNode(root->val);
        if(root->right==NULL && root->left!=NULL)
        {
            temp->right=invertTree(root->left);
        }
          if(root->left==NULL && root->right!=NULL)
        {
            temp->left=invertTree(root->right);
        }
        if(root->left!=NULL)
        {
            temp->left=invertTree(root->right);
        }
        if(root->right!=NULL)
        {
            temp->right=invertTree(root->left);
        }
        return temp;
    }
};