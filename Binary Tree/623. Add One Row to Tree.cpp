//623. Add One Row to Tree
class Solution {
public:
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth==1){
                     TreeNode* temp = new TreeNode(val);
                     temp->left = root;
                     temp->right = NULL;
                     return temp;
        }
        queue<TreeNode*>q;
        q.push(root); 
        depth--;
        while(!q.empty()){
             int n = q.size();
             if(depth !=1){
                 for(int i =0;i<n;i++){
                     auto node = q.front();q.pop();
                     if(node->left) q.push(node->left);
                     if(node->right) q.push(node->right);
                 }
             }
             else if(depth==1){
                   for(int i =0;i<n;i++){
                     auto node = q.front();q.pop();
                     TreeNode* t1 = node->left;
                     node->left = new TreeNode(val);
                     node->left->left = t1;
                     TreeNode* t2 = node->right;
                     node->right = new TreeNode(val);
                     node->right->right = t2;
                 }
                // break;
             }
              depth--;
        }
       return root;
    }
};
