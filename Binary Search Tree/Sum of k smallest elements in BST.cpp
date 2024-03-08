Sum of k smallest elements in BST

void inorder(Node* root,vector<int>&ans){
    if(!root) return;
    inorder(root->left,ans);
    ans.push_back(root->data);
    inorder(root->right,ans);
}
int sum(Node* root, int k) { 
    vector<int>ans;
    int result = 0;
    inorder(root,ans);
    for(int i =0;i<k;i++){
        result +=ans[i];
    }
    return result;
} 
***************************************
void inorder(Node* root,int &sum,int &k){
    if(!root) return;
    inorder(root->left,sum,k);
    k--;
    if(k>=0) sum +=root->data;
    if(k<=0) return;
    inorder(root->right,sum,k);
}
int sum(Node* root, int k) { 
    int summ = 0;
    inorder(root,summ,k);
    return summ;
} 
