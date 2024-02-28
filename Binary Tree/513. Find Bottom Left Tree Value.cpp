
 
class Solution {
public:
    void f(TreeNode* root,int depth,int &maxdepth,int &ans){
        if(!root) return ;   //O(n) //O(maxdepth)
        if(depth>maxdepth){
            maxdepth = depth;
            ans = root->val;
        }
        f(root->left,depth+1,maxdepth,ans);
        f(root->right,depth+1,maxdepth,ans);

    }
    int findBottomLeftValue(TreeNode* root) {
        int ans = 0;
        int maxdepth =-1;
        f(root,0,maxdepth,ans);
        return ans;
    }
};
