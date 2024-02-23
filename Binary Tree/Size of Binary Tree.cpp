******************************************************
    int getSize(Node* node){
  if(!node) return 0;
  return 1+getSize(node->left)+getSize(node->right);
}  
********************************************************
void f(Node* root, vector<int>& ans) {
    if (!root) return;
    ans.push_back(root->data);
    if (root->left) f(root->left, ans);
    if (root->right) f(root->right, ans);
}

int getSize(Node* node) {
    vector<int> ans;
    f(node, ans);
    return ans.size();
}
****************************************************
void f(Node* root,int &count){
    if(root==NULL) return;
    count++;
    if(root->left) f(root->left,count);
    if(root->right) f(root->right,count);
}
int getSize(Node* node){
   int count = 0;
   f(node,count);
   return count;
}
***********************************************************
int f(Node* root){
    if(root==NULL) return 0;
    int leftnode = 0;
    int rightnode = 0;
    if(root->left) {
       leftnode +=f(root->left);
    }
    if(root->right) {
    rightnode +=f(root->right);
    }
    return 1+leftnode+rightnode;
}
int getSize(Node* node){
  return f(node);
}

****************************************************************
int f(Node* root) {
    if (root == NULL) return 0; // Base case: If the root is NULL, return 0
    int leftnode = 0;
    int rightnode = 0;
    if (root->left) {
        leftnode = f(root->left);
    }
    if (root->right) {
        rightnode = f(root->right);
    }
    return 1 + leftnode + rightnode; // Count the current node and the nodes in left and right subtrees
}
int getSize(Node* node){
  return f(node);
}

