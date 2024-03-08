
class Solution {
public:
    void Inorder(TreeNode* root, vector<int>& ans) {
        if (!root)
            return;
        Inorder(root->left, ans);
        ans.push_back(root->val);
        Inorder(root->right, ans);
    }
    int minDiffInBST(TreeNode* root) {
        vector<int> ans;
        Inorder(root, ans);
        int finalAns = INT_MAX;
        for (int i = 1; i < ans.size(); i++) {
            int temp = abs(ans[i] - ans[i - 1]);
            finalAns = min(finalAns, temp);
        }
        return finalAns;
    }
};

*********************************************************************

class Solution {
public:
    void Inorder(TreeNode* root, int &ans, int &prev) {
        if (!root) return;
        Inorder(root->left, ans,prev);
        if(prev !=INT_MIN){
            ans = min(ans,root->val-prev);
        }
        prev = root->val;
        Inorder(root->right, ans,prev);
    }
    int minDiffInBST(TreeNode* root) {
        int ans = INT_MAX;
        int prev = INT_MIN;
        Inorder(root,ans,prev);
        return ans;
    }
};
