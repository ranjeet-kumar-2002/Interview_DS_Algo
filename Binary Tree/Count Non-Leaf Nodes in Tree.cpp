
class Solution {
  public:
    int f(Node* root){
        int count = 0;
        if(root->left || root->right) count++;
        if(root->left){
            count +=f(root->left);
        }
        if(root->right){
            count +=f(root->right);
        }
        return count;
    }
    int countNonLeafNodes(Node* root) {
      return f(root);
    }
};

***********************************************************************
class Solution {
  public:
    int countNonLeafNodes(Node* root) {
       if(!root) return 0;
       if(!root->left && !root->right) return 0;
       return 1+countNonLeafNodes(root->left)+countNonLeafNodes(root->right);
    }
};
