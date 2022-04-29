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
     void bst(TreeNode* root, int &sum)
    {
        if(root==NULL) return;
       
        bst(root->right,sum);
         sum+=root->val;
         root->val=sum;
        bst(root->left, sum);
    }
    TreeNode* convertBST(TreeNode* root) {
        int sum=0;
        bst(root,sum);
        return root;
    }
};