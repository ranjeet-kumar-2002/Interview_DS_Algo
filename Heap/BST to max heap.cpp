#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left,*right;
    Node(int value){
        data = value;
        left = right =NULL;
    }
};
Node* insert(Node* root,int target){
    if(root==NULL){
        Node *temp = new Node(target);
        return temp;
    }
    if(root->data>target){
        root->left = insert(root->left,target);
    }else{
        if(root->data<target){
        root->right = insert(root->right,target);
      }
    }
    return root;
}
void inorder(Node* root,vector<int>&ans){
    if(root==NULL) return ;
     inorder( root->left,ans);
     ans.push_back(root->data);
     inorder( root->right,ans);
}
void postorder(Node* root,vector<int>&ans,int &indx){
         if(!root) return;
         postorder(root->left,ans,indx);
         postorder(root->right,ans,indx);
         root->data = ans[indx];indx++;
    }
    void print(Node* root){
    if(root==NULL) return ;
     print(root->left);
     print( root->right);
     cout<<(root->data)<<" ";
 }
int main(){
    int n;cin>>n;
    vector<int>arr(n);
    for(int i =0;i<n;i++) cin>>arr[i];//  {4,2,6,1,3,5,7};
    Node* root = NULL;
    for(int i =0;i<arr.size();i++){
        root = insert(root,arr[i]);
    }
    vector<int>ans;
    inorder(root,ans);
    int indx = 0;
    postorder(root,ans,indx);
    print(root);
}

// Input :
//                  4
//               /   \
//               2     6
//             /  \   /  \
//           1   3  5    7  

// Output : 1 2 3 4 5 6 7 
// Exaplanation :
//               7
//              /   \
//             3     6
//           /   \  /   \
//          1    2 4     5
// The given BST has been transformed into a
// Max Heap and it's postorder traversal is
// 1 2 3 4 5 6 7.

***************************************************************************************
class Solution{
  public:
    void Inorder(Node* root,vector<int>&ans){
         if(!root) return;
         Inorder(root->left,ans);
         ans.push_back(root->data);
         Inorder(root->right,ans);
    }
    void postorder(Node* root,vector<int>&ans,int &indx){
         if(!root) return;
         postorder(root->left,ans,indx);
         postorder(root->right,ans,indx);
         root->data = ans[indx];indx++;
    }
    void convertToMaxHeapUtil(Node* root){
      vector<int>ans;
      Inorder(root,ans);
      int indx = 0;
      postorder(root,ans,indx);
    }    
};


