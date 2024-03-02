//Diagonal Traversal of Binary Tree

void findleftmostindx(Node* root,int pos,int &l){
    if(!root) return;
    l = max(l,pos);
    findleftmostindx(root->left,pos+1,l);
    findleftmostindx(root->right,pos,l);
}

void findig(Node* root,int pos,vector<vector<int>>&temp){
    if(!root) return;
    temp[pos].push_back(root->data);
    findig(root->left,pos+1,temp);
    findig(root->right,pos,temp);
}

vector<int>dig(Node* root){
    vector<int>ans;
    if(root==NULL) return ans;
    int l = 0;
    findleftmostindx(root,0,l);
    vector<vector<int>>temp(l+1);
    findig(root,0,temp);
    for(int i =0;i<temp.size();i++){
        for(int j =0;j<temp[i].size();j++){
            ans.push_back(temp[i][j]);
        }
    }
    return ans;
}
vector<int> diagonal(Node *root){
   return dig(root);
   
}
