
void f(TreeNode* A,int &ans,int &B){
    if(!A) return;
    f(A->left,ans,B);
    B--;
    if(B==0) {
        ans = A->val;
        return;
    }
     f(A->right,ans,B);
}
int Solution::kthsmallest(TreeNode* A, int B) {
    int ans = 0;
    f(A,ans,B);
    return ans;
}
