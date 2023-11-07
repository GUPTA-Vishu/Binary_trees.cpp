#include <iostream>
using namespace std;
class node
{
public:
   int data;
   node *left;
   node *right;

   node(int d)
   {
      this->data = d;
      this->left = NULL;
      this->right = NULL;
   }
};

node *buildTree(node *root)
{
   cout << "enter the value of the node" << endl;
   int data;
   cin >> data;
   root = new node(data);
   if (data == -1)
   {
      return NULL;
   }
   cout << "Enter the data inserting in left of" << data << endl;
   root->left = buildTree(root->left);
   cout << "Enter the data inserting in right of " << data << endl;
   root->right = buildTree(root->right);
   return root;
}

int main()
{
   node *root = NULL;
   root = buildTree(root);
   return 0;
}