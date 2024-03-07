

class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;
        while(root){
            if(root->left==NULL){  // left not exits
                ans.push_back(root->val);
                root= root->right;
            }else{ //left  exits
                TreeNode* curr = root->left;
                while(curr->right && curr->right !=root){
                    curr = curr->right;
                }
                if(curr->right==NULL) { //not travese
                    curr->right = root;
                    root= root->left;
                }else{  // already traverse
                     curr->right = NULL;
                     ans.push_back(root->val);
                     root = root->right;
                }
            }
        }
        return ans;
    }
};

*************************************************************************










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
