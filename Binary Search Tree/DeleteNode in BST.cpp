*****************deleteNode
Node *deleteNode(Node *root, int X) {
   if(!root) return NULL;
   else if(root->data>X){
       root->left = deleteNode(root->left, X);
       return root;
   }else if(root->data<X){
       root->right =  deleteNode(root->right, X);
       return root;
   }else{
       // if leaf node
       if(root->right==NULL && root->left==NULL){
           delete root;
           return NULL;
       }   // if one child
       else if(root->left==NULL){
           Node* temp = root->right;
           delete root;
           return temp;
       } else if(root->right==NULL){
           Node* temp = root->left;
           delete root;
           return temp;
       }
       else{  // if two child
            // finf the greatest elemtn from left
            Node* child = root->left;
            Node* parent = root;
            // rightmost node tak pahuchna hai
            while(child->right){
                parent = child;
                child= child->right;
            }
            if(parent !=root){
                parent->right = child->left;
                child->left = root->left;
                child->right = root->right;
                return child;
            }
            else{
                child->right = root->right;
                delete root;
                return child;
            }
       }
   }
}
