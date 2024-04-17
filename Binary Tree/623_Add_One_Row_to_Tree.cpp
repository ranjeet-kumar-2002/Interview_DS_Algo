#include<bits/stdc++.h>
using namespace std;

//623. Add One Row to Tree

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;

    // constructor with default parameters
    TreeNode(int val = 0, TreeNode* left = NULL, TreeNode* right = NULL){
        this->val = val;
        this->left = left;
        this->right = right;
    }
};

class Solution {
public:
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth==1){
                     TreeNode* temp = new TreeNode(val);
                     temp->left = root;
                     temp->right = NULL;
                     return temp;
        }
        queue<TreeNode*>q;
        q.push(root); 
        depth--;
        while(!q.empty()){
             int n = q.size();
             if(depth !=1){
                 for(int i =0;i<n;i++){
                     auto node = q.front();q.pop();
                     if(node->left) q.push(node->left);
                     if(node->right) q.push(node->right);
                 }
             }
             else if(depth==1){
                   for(int i =0;i<n;i++){
                     auto node = q.front();q.pop();
                     TreeNode* t1 = node->left;
                     node->left = new TreeNode(val);
                     node->left->left = t1;
                     TreeNode* t2 = node->right;
                     node->right = new TreeNode(val);
                     node->right->right = t2;
                 }
                // break;
             }
              depth--;
        }
       return root;
    }
};

int main(){
    int n;
    cout<<"Enter number of nodes: ";
    cin>>n;

    vector<int> v(n);

    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    Solution obj;
    TreeNode* root;

    queue<TreeNode*> q;
    root = new TreeNode(v[0]);
    q.push(root);
    int i=1;

    while(!q.empty()){
        TreeNode* temp = q.front(); q.pop();
        if(i<n and v[i] != -1){ 
            temp->left = new TreeNode(v[i++]);
            q.push(temp->left);
        }
        else if(i<n and v[i] == -1){
            temp->left = NULL;
            i++;
        }
        
        if(i<n and v[i] != -1){ 
            temp->right = new TreeNode(v[i++]);
            q.push(temp->right);
        }
        else if(i<n and v[i] == -1){
            temp->right = NULL;
            i++;
        }

        while(i==n and !q.empty()){
            TreeNode* temp = q.front(); q.pop();
            temp->left = NULL;
            temp->right = NULL;
        }
    }
    
    // printing the Tree
    q.push(root);
    while(!q.empty()){
        int n = q.size();
        for(int i=0; i<n; i++){
            TreeNode* t = q.front(); q.pop();
            cout<<t->val<<" ";

            if(t->left) q.push(t->left);
            if(t->right) q.push(t->right);
        }   cout<<endl;
    }
    cout<<endl;

    root = obj.addOneRow(root, 1, 2);

    // printing the Tree after adding one row
    q.push(root);
    while(!q.empty()){
        int n = q.size();
        for(int i=0; i<n; i++){
            TreeNode* t = q.front(); q.pop();
            cout<<t->val<<" ";

            if(t->left) q.push(t->left);
            if(t->right) q.push(t->right);
        }   cout<<endl;
    }

    return 0;
}