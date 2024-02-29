Check for Balanced Tree

class Solution{
    public:
    int height(Node* root){
        if(!root) return 0;
        return 1+max(height(root->left),height(root->right));
    }
    bool f(Node* root){
    if(!root) return true;
    int lefth = height(root->left);
    int righth = height(root->right);
    int diff = abs(lefth-righth);
    if(diff>1) return false;
    return (f(root->left)&&f(root->right));
     
    }
    bool isBalanced(Node *root){
    return f(root);;
      
    }
};
