class Solution {
  public:
    int f(Node* root){
        if(root->left && root->right) return 1;
        int count = 0;
        if(root->left){
            count +=f(root->left);
        }
        if(root->right){
            count+=f(root->right);
        }
        return count;
    }
    int countNonLeafNodes(Node* root) {
      return f(root);
    }
};
