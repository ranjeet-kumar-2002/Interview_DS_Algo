// class Solution {
// public:
//     void f(TreeNode* root,int &sum,int &n){
//         if(root->left == nullptr && root->right == nullptr){
//              sum += n*10 + root->val;
//              return;
//         }
//         n = n*10 + root->val;
//         if(root->left){
//             f(root->left,sum,n);
//         } 
//         if(root->right){
//             f(root->right,sum,n);
//         } 
//         n/=10;
//         return;
//     }
//     int sumNumbers(TreeNode* root) {
//       int n = 0;
//       int sum = 0;
//       f(root,sum,n);
//       return sum;
//     }
// };

// //**********************************************************

// class Solution {
// public:
//     int sum = 0;
//     int f(TreeNode* root, int n){
//         if(root->left==nullptr && root->right==nullptr){
//             sum += n;
//         }
        
//         if(root->left){
//             n = n*10+root->left->val;
//             f(root->left, n);
//             n = n/10;
//         }
//         if(root->right){
//             n=n*10+root->right->val;
//             f(root->right, n);
//             n = n/10;
//         }

//         return sum;
//     }
//     int sumNumbers(TreeNode* root) {
//         return f(root, root->val);
//     }
// };

// //***********************************************************
// class Solution {
// public:
//     int sum = 0;
//     int f(TreeNode* root, int n){
//         if(root->left==nullptr && root->right==nullptr){
//             sum += n;
//         }
        
//         if(root->left){
           
//             f(root->left,n*10+root->left->val);
//         }
//         if(root->right){
//             f(root->right,n*10+root->right->val);
//         }

//         return sum;
//     }
//     int sumNumbers(TreeNode* root) {
//         return f(root, root->val);
//     }
// };

// *******************************************************
// using dfs

// Definition for a binary tree node.

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution{
public:
    int dfs(TreeNode* root, int sum){
        if(root == nullptr) return 0;
        sum = sum*10 + root->val;

        if(root->left==nullptr && root->right == nullptr) return sum;
        return dfs(root->left, sum) + dfs(root->right, sum);
    }

    int sumNumbers(TreeNode* root){
        return dfs(root, 0);
    }
};