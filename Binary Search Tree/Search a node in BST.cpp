// Search a node in BST

bool search(Node* root, int x) {
  if(root==NULL) return false;
  if(root->data==x) return true;
  if(root->data>x){
      return search(root->left,x);
  }else{
      return search(root->right,x);
  }
}
 ***********************************************8
bool find(Node* root,int x){
   if(root==NULL) return false;
   if(root->data==x) return true;
   bool check = false;
   if(root->data>x){
       check =  search(root->left,x);
   }else{
       check =  search(root->right,x);
   }
   return check;
}

bool search(Node* root, int x) {
  return find(root,x);
}
