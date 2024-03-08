class Solution{
    public:
    void f(Node* root,vector<int>&temp){
        if(!root) return;
        f(root->left,temp);
        temp.push_back(root->data);
        f(root->right,temp);
    }
    bool isBST(Node* root){
     vector<int>temp;
     f(root,temp);
     for(int i =1;i<temp.size();i++){
         if(temp[i-1]>=temp[i])return false;
     }
     return true;
    }
};

***********************************************************
class Solution {
public:
    bool f(Node* root, int& prev) { // pass prev by reference
        if (!root) return true;
        // Check left subtree
         bool left = f(root->left, prev);
        // Check current node
        if (root->data <= prev)
            return false;
        prev = root->data;
        // Check right subtree
         bool right = f(root->right, prev);
         return left&&right;
    }

    bool isBST(Node* root) {
        int prev = INT_MIN; // Initialize prev with minimum value
        return f(root, prev);
    }
};
