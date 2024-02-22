struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
}; */

class Solution {
  public:
     void f(Node* root,vector<int>&ans){
        if(!root) return;
        f(root->left,ans);
        ans.push_back(root->data);
        f(root->right,ans);
    }
    
    vector<int> inOrder(Node* root) {
      vector<int>ans;
      f(root,ans);
      return ans;
    }
};
