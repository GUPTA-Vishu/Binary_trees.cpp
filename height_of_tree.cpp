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
    int maxDepth(TreeNode* root) {
      TreeNode*curr=root;
      if(curr==NULL){
        return 0;

      }
      int left=maxDepth(curr->left);
      int right=maxDepth(curr->right);
      int ans=max(left,right)+1;
      return ans;
           
    }
};