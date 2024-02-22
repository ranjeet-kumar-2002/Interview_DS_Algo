struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

//Function to return a list containing the preorder traversal of the tree.
void f(Node* root,vector<int>&ans){
    if(!root) return ;
    ans.push_back(root->data);
    f(root->left,ans);
    f(root->right,ans);
}
vector <int> preorder(Node* root){
  vector<int>ans;
  f(root,ans);
  return ans;
  
}
