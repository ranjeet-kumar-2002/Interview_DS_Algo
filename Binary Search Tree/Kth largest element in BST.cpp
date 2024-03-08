//Kth largest element in BST

class Solution{
    public:
    void f(Node* root,vector<int>&ans){
        if(!root) return;
        f(root->left,ans);
        ans.push_back(root->data);
        f(root->right,ans);
    }
    int kthLargest(Node *root, int K){
      vector<int>ans;
      f(root,ans);
      int n = ans.size();
      return ans[n-K];
    }
};

class Solution{
    public:
    void f(Node* root,int &ans,int &k){
        if(!root) return;
        f(root->right,ans,k);
        k--;
        if(k==0){
            ans = root->data;
            return;
        }
        f(root->left,ans,k);
    }
    int kthLargest(Node *root, int K){
      int ans = 0;
      f(root,ans,K);
      return ans;
    }
};
