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
void inorder(Node* root){
    if(root==NULL) return ;
     inorder( root->left);
    cout<<root->data<<" "; //1 2 3 5 6 11 14 17 18 20 
    inorder( root->right);
}
int main(){
    vector<int>arr={6,3,17,5,11,18,2,1,20,14};
    Node* root = NULL;
    for(int i =0;i<arr.size();i++){
        root = insert(root,arr[i]);
    }
    inorder(root);
}
