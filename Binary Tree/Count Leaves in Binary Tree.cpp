
int f(Node* root){
    if(root->left==NULL && root->right==NULL) return 1;
    int leftcount = 0;
    int rightcount= 0;
    if(root->left) {
      leftcount +=f(root->left);
    }
    if(root->right){
        rightcount +=f(root->right);
    }
    return leftcount+rightcount;
}
int countLeaves(Node* root){
  return f(root);
}


int f(Node* root){
    if(root->left==NULL && root->right==NULL) return 1;
    int count = 0;
    if(root->left) {
       count +=f(root->left);
    }
    if(root->right){
        count +=f(root->right);
    }
    return count;
}
int countLeaves(Node* root){
   return f(root);
}
