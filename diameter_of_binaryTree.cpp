class Solution {
  int height(TreeNode*root){
    TreeNode*curr=root;
    if(curr==NULL){
      return 0;
    }
    int left=height(curr->left);
    int right=height(curr->right);
    int ans=max(left,right)+1;
    return ans;

  }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        TreeNode*curr=root;
        if(root==NULL){
          return 0;

        }
        int op1=diameterOfBinaryTree(curr->left);
        int op2=diameterOfBinaryTree(curr->right);
        int op3=height(curr->left)+height(curr->right);
        int ans=max(op1,max(op2,op3));
        return ans;


    }
};