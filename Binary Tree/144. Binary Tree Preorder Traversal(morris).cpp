//144. Binary Tree Preorder Traversal
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
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
                     ans.push_back(root->val);
                    curr->right = root;
                    root= root->left;
                }else{  // already traverse
                     curr->right = NULL;
                     root = root->right;
                }
            }
        }
        return ans;
    }
};
