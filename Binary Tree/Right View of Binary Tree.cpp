//Right View of Binary Tree

class Solution{
    public:
    vector<int> rightView(Node *root){
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
            
            ans.push_back(temp1[temp1.size()-1]);
        }
        return ans;
    }
};
********************************************************

class Solution{
    public:
    vector<int> rightView(Node *root){
        queue<Node*>q;
        q.push(root);
        vector<int>ans;
        while(!q.empty()){
            int n = q.size();
            vector<int>temp1;
            for(int i =0;i<n;i++){
                Node* temp = q.front();q.pop();
                temp1.push_back(temp->data);
                if(temp->right) q.push(temp->right);
                if(temp->left) q.push(temp->left);
            }
            
            ans.push_back(temp1[0]);
        }
        return ans;
    }
};
***********************************************************************
class Solution{
    public:
    vector<int> rightView(Node *root){
        queue<Node*>q;
        q.push(root);
        vector<int>ans;
        while(!q.empty()){
            int n = q.size();
            ans.push_back(q.front()->data);
            for(int i =0;i<n;i++){
                Node* temp = q.front();q.pop();
                if(temp->right) q.push(temp->right);
                if(temp->left) q.push(temp->left);
            }
        }
        return ans;
    }
};
*****************************************************************

class Solution{
    public:
    void rView(Node* root,int level,vector<int>&ans){
        if(!root) return;
        if(level==ans.size()){
            ans.push_back(root->data);
        }
        rView(root->right,level+1,ans);
        rView(root->left, level+1,ans);
        
    }
    vector<int> rightView(Node *root){
      vector<int>ans;
      rView(root,0,ans);
      return ans;
    }
};

***********************************************************
class Solution{
    public:
    void rView(Node* root,int level,vector<int>&ans){
        if(level==ans.size()){
            ans.push_back(root->data);
        }
        if(root->right)rView(root->right,level+1,ans);
        if(root->left) rView(root->left, level+1,ans);
        
    }
    vector<int> rightView(Node *root){
      vector<int>ans;
      rView(root,0,ans);
      return ans;
    }
};

