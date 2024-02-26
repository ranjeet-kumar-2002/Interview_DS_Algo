class Solution {
  public:
  void f(Node* root){
      if(!root) return ;
      swap(root->left,root->right);
      f(root->left);
      f(root->right);
  }
  void mirror(Node* node) {
      f(node);
    }
};

*****************************************************
class Solution {
  public:
  void f(Node* root){
      if(!root) return ;
      swap(root->left,root->right);
      if(root->left) f(root->left);
      if(root->right) f(root->right;
  }
  void mirror(Node* node) {
      f(node);
    }
};
