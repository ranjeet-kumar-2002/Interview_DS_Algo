//Left View of Binary Tree

// Constraints:
// 0 <= Number of nodes <= 100
// 0 <= Data of a node <= 1000

vector<int> leftView(Node *root){
    if(!root) return {};
    queue<Node*>q;
    q.push(root);
    vector<int>ans;
    while(!q.empty()){
         int n = q.size();
         vector<int>temp1;
         for(int i =0;i<n;i++){
             Node* temp = q.front();q.pop();
             temp1.push_back(temp->data);
             if(temp->left) q.push(temp->left);
             if(temp->right) q.push(temp->right);
         }
         ans.push_back(temp1[0]);
    }
    return ans;
}

************************************************************
vector<int> leftView(Node *root){
    if(!root) return {};
    queue<Node*>q;
    q.push(root);
    vector<int>ans;
    while(!q.empty()){
         int n = q.size();
         ans.push_back(q.front()->data);
         for(int i =0;i<n;i++){
             Node* temp = q.front();q.pop();
             if(temp->left) q.push(temp->left);
             if(temp->right) q.push(temp->right);
         }
    }
    return ans;
}
*****************************************************************
void Lview(Node* root,int level,vector<int>&ans){
    if(!root) return;
    if(level==ans.size()){
        ans.push_back(root->data);
    }
    Lview(root->left,level+1,ans);
    Lview(root->right,level+1,ans);
}
vector<int> leftView(Node *root){
    if(!root) return {};
    vector<int>ans;
    Lview(root,0,ans);
    return ans;
}

**************************************************************
void Lview(Node* root,int level,vector<int>&ans){
    if(level==ans.size()){
        ans.push_back(root->data);
    }
    if(root->left) Lview(root->left,level+1,ans);
    if(root->right) Lview(root->right,level+1,ans);
}
vector<int> leftView(Node *root){
    if(!root) return {};
    vector<int>ans;
    Lview(root,0,ans);
    return ans;
}
