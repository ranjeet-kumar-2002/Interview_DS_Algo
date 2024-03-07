//94. Binary Tree Inorder Traversal
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;
        TreeNode* curr = root;
        while(curr!=NULL){
            if(curr->left==NULL){
                ans.push_back(curr->val);
                curr = curr->right;
            }else{
                TreeNode* leftchild = curr->left;
                while(leftchild->right!=NULL){
                    leftchild = leftchild->right;
                }
                leftchild->right = curr;
                TreeNode* temp = curr;
                curr = curr->left;
                temp->left=NULL;
            }
        }
        return ans;
    }
};
