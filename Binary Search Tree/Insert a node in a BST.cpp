//Insert a node in a BST
class Solution{
    public:
        Node* f(Node* root,int target){
            if(!root){
                Node* temp = new Node(target);
                return temp;
            }
            if(root->data>target){
                root->left = f(root->left,target);
            } else if (target > root->data) {  // all values are unique
            root->right = f(root->right, target);
        }
            return root;
        }
        Node* insert(Node* node, int data) {
        return f(node,data);
    }

};
