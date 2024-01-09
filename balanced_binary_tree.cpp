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

  int Height(TreeNode*root){
    if(root==NULL){
      return 0;

    }
    int left=Height(root->left);
    int right=Height(root->right);
    int ans=max(left,right)+1;
    return ans;

      }
   void inorderUtil(TreeNode*root,bool &ans){
    if(root==NULL){
      return ;

    }
    inorderUtil(root->left,ans);
    int lh=Height(root->left);
    int rh=Height(root->right);
    if(abs(lh-rh)>1){
      ans=ans&&false;

    }


    inorderUtil(root->right,ans);
    

    


  }
public:
    bool isBalanced(TreeNode* root) {
      bool ans=true;
      inorderUtil(root,ans);
      return ans;

        
    }
};