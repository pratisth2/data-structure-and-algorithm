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
    void path(TreeNode* root, string temp,vector<string>&v)
    {
      if(root->left==NULL && root->right==NULL)
      {
          stringstream ss;
          ss<<root->val;
          string s;
          ss>>s;
         temp=temp+s;
         v.push_back(temp);
          return ;
      }
        stringstream ss;
        ss<<root->val;
          string s;
            ss>>s;
            temp=temp+s+"->";
        if(root->left!=NULL)
        {
            path(root->left,temp,v);
        }
        if(root->right!=NULL)
        {
            path(root->right,temp,v);
        }
        return;
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>v;
        string temp;
        path(root,temp,v);
        return v;
        
    }
};