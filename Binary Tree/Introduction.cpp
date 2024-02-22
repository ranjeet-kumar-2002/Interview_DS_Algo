*****************creating a binary tree using level order traversal********************************
#include<bits/stdc++.h>
using namespace std;
class Node{
   public:
  int data;
  Node*left;
  Node*right;
  Node(int value){
      data = value;
      left=right=NULL;
  }
};
int main(){
    cout<<"Enter the root element"<<endl;
    int x,first,second;
    cin>>x;
    Node* root = new Node(x);
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        Node*temp = q.front();q.pop();
        cout<<"enter the left element"<<temp->data<<endl;
        cin>>first;
        if(first!=-1){
            temp->left = new Node( first);
            q.push(temp->left);
        }
        cout<<"enter the second"<<temp->data<<endl;
        cin>>second;
        if(second !=-1){
            temp->right = new Node(second);
            q.push(temp->right);
        }
    }
    
}

**********************************************************************************************
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node*left;
    Node* right;
    Node(int value){
        data = value;
        left=right=NULL;
    }
};

Node*bt(){
    int x;
    cin>>x;
    if(x==-1) return NULL;
    Node* temp = new Node(x);
    cout<<"Enter the left element"<<x<<":";
    temp->left = bt();
     cout<<"Enter the right element"<<x<<":";
    temp->right = bt();
    return temp;
}
int main(){
    Node*root;
    cout<<"Enter the root element"<<endl;
    root = bt();
}

