
void f(TreeNode* root, vector<int>&ans){
  if(!root) return;
  f(root->left,ans);
  ans.push_back(root->val);    
  f(root->right,ans);    
}
int Solution::kthsmallest(TreeNode* A, int B) {
    vector<int>ans;
    f(A,ans);
    return ans[B-1];
}

*********************************************8
void f(TreeNode* root, int &ans,int &k){
  if(!root) return;
  f(root->left,ans,k);
  k--;
  if(k==0){
      ans = root->val;
      return;
  }  
  f(root->right,ans,k);    
}
int Solution::kthsmallest(TreeNode* A, int B) {
    int ans = 0;
    f(A,ans,B);
    return ans;
}
