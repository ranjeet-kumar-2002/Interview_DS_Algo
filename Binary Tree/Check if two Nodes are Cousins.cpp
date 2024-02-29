//Check if two Nodes are Cousins

bool parentdiff(Node* root,int a,int b){
    if(!root) return 0;
    if(root->left && root->right) {
         if(root->left->data==a && root->right->data==b) return 1;
         if(root->left->data==b && root->right->data==a) return 1;
    }
    return parentdiff(root->left,a,b)||parentdiff(root->right,a,b);
}

bool isCousins(Node *root, int a, int b){
  queue<Node*>q;
  q.push(root);
  int l1 =-1;
  int l2 =-1;
  int level = 0;
  while(!q.empty()){
      int n = q.size();
      for(int i=0;i<n;i++){
          Node* temp = q.front();q.pop();
          if(temp->data==a) l1=level;
          if(temp->data==b) l2=level;
          if(temp->left) q.push(temp->left);
          if(temp->right) q.push(temp->right);
      }
      level++;
      if(l1!=l2) return false;
      //if(l1!=-1 && l2!=-1) break;
  }
  return !parentdiff(root,a,b);
}
