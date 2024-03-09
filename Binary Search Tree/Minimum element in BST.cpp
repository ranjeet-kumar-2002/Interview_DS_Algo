//Minimum element in BST

class Solution {
public:   
    void f(Node* root,vector<int>&ans){
        if(!root) return;
        f(root->left,ans);
        ans.push_back(root->data);
        f(root->right,ans);
    }
    int minValue(Node* root) {
      vector<int>ans;
      f(root,ans);
      return ans[0];
    }
};
***********************************************************
class Solution {
public:   
    void f(Node* root,int &ans){
        if(!root) return;
        f(root->left,ans);
        ans=min(ans,root->data);
        f(root->right,ans);
    }
    int minValue(Node* root) {
       int ans = INT_MAX;
       f(root,ans);
       return ans;
    }
};
