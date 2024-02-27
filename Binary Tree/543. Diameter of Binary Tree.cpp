543. Diameter of Binary Tree
class Solution {
public:
     int height(TreeNode* root){
         if(root==NULL) return 0;
         int left = height(root->left);
         int right = height(root->right);
         return 1+max(left,right);
     }

    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL) return 0;
        int lheight = height(root->left);
        int rheight = height(root->right);
        int ldiameter = diameterOfBinaryTree(root->left);
        int rdiameter = diameterOfBinaryTree(root->right);
        return max(lheight+rheight,max(ldiameter, rdiameter));
    }
};



class Solution {
public:
     int height(TreeNode* root){
         if(root==NULL) return 0;
         int left = height(root->left);
         int right = height(root->right);
         int h;
         if(left>right){
             h = 1+left;
         }else {
              h =1+right;
         }
         return h;
     }

    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL) return 0;
        int lheight = height(root->left);
        int rheight = height(root->right);
        int ldiameter = diameterOfBinaryTree(root->left);
        int rdiameter = diameterOfBinaryTree(root->right);
        return max(lheight+rheight,max(ldiameter, rdiameter));
    }
};


class Solution {
public:
     int height(TreeNode* root){
         if(root==NULL) return 0;
         int left = height(root->left);
         int right = height(root->right);
         if(left>right) return 1+left;
         else return 1+right;
     }

    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL) return 0;
        int lheight = height(root->left);
        int rheight = height(root->right);
        int ldiameter = diameterOfBinaryTree(root->left);
        int rdiameter = diameterOfBinaryTree(root->right);
        return max(lheight+rheight,max(ldiameter, rdiameter));
    }
};
