// class Solution{
//     public:
//     int h(Node* root){
//         if(!root) return 0;
//         return 1+max(h(root->left),h(root->right));
//     }
//     int height(struct Node* node){
//       return h(node);
//     }
// };

//Height of Binary Tree

class Solution{
    public:
    int h(Node* root){
        if(!root) return 0;
        int leftheight = h(root->left);
        int rightheight = h(root->right);
        return 1+max(leftheight,rightheight);
    }
    int height(struct Node* node){
       return h(node);
    }
};
