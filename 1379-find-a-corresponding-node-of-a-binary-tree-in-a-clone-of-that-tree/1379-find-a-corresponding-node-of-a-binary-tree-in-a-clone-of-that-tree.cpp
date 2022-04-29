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
    TreeNode* ans=NULL;
    void targetcopy(TreeNode* original, TreeNode* cloned, TreeNode* target)
    {
          if(original==NULL) return ;
        if(original==target) ans=cloned;
        targetcopy(original->left, cloned->left, target);
        targetcopy(original->right, cloned->right, target);
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
       targetcopy(original,cloned,target);
        return ans;
        
    }
};