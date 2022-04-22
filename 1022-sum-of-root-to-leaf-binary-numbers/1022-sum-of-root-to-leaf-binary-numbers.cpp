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
    int ans=0;
    void sumroot(TreeNode*root, int sum)
    {
         if(root==NULL)
        {
            return;
        }
        sum=sum*2+root->val; // 4
        if(root->left==NULL && root->right==NULL)
        {
            ans+=sum;
            return;
        }
        sumroot(root->left,sum);
        sumroot(root->right,sum);
    }
    int sumRootToLeaf(TreeNode* root) {
     if(root==NULL)
     {
         return 0;
     }
      sumroot(root, 0);
        return ans;
        
    } 
};