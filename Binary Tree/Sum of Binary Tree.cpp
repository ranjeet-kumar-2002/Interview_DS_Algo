long int sumBT(Node* root){
   if(!root) return 0;
   return root->key+sumBT(root->left)+sumBT(root->right);
}
******************************************************

int f(Node*root){
     if(!root) return 0;
     return root->key+f(root->left)+f(root->right);
}
long int sumBT(Node* root){
  return f(root);
}
******************************************************

void f(Node*root,int &sum){
     if(!root) return;
     sum +=root->key;
     if(root->left)  f(root->left,sum);
     if(root->right) f(root->right,sum);
}
long int sumBT(Node* root){
  int sum = 0;
  f(root,sum);
  return sum;
}


******************************************************************
int f(Node*root){
     if(!root) return 0;
     int sum = 0;
     sum +=root->key;
     if(root->left) sum+=f(root->left);
     if(root->right) sum+=f(root->right);
     return sum;
}
long int sumBT(Node* root){
  return f(root);
}
