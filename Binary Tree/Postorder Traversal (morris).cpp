class Solution{
    public:
    vector<int> postOrder(Node* root) {
        vector<int>ans; // creating vector for storing the ans
        while(root){  // we will run while lopp while root will not be null
            if(root->right==NULL){  // right does't exits
                ans.push_back(root->data);
                root = root->left ;
            }else{ // right exits
                
                Node* curr = root->right;  // going from the right to leftmost node 
                while(curr->left && curr->left !=root){
                    curr = curr->left;
                }
                if(curr->left==NULL){ // not travese 
                    curr->left = root;
                    ans.push_back(root->data);
                    root = root->right;
                }else{  // travesed
                    curr->left = NULL;
                    root = root->left;
                }
            }
        }
        reverse(ans.begin(),ans.end()); // NRL reverse == LRN(postorder)
        return ans;
    }
};
