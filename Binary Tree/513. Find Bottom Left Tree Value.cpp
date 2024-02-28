
 ****************************************DFS*******************************
class Solution {
public:
    void f(TreeNode* root,int depth,int &maxdepth,int &ans){
        if(!root) return ;   //O(n) //O(maxdepth)
        if(depth>maxdepth){
            maxdepth = depth;
            ans = root->val;
        }
        f(root->left,depth+1,maxdepth,ans);
        f(root->right,depth+1,maxdepth,ans);

    }
    int findBottomLeftValue(TreeNode* root) {
        int ans = 0;
        int maxdepth =-1;
        f(root,0,maxdepth,ans);
        return ans;
    }
};

****************************BFS I in this process left and right*************************
class Solution {
public:
    int findBottomLeftValue(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        int ans = 0;
        while(!q.empty()){
               TreeNode* temp = q.front();q.pop();
               ans = temp->val;
               if(temp->right) q.push(temp->right);
               if(temp->left) q.push(temp->left);
        }
        return ans;
    }
};

**************************************BFS II level by level*****************************************

class Solution {
public:
    int findBottomLeftValue(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        int ans = 0;
        while(!q.empty()){
           int n = q.size();
           for(int i =0;i<n;i++){
               TreeNode* temp = q.front();q.pop();
               ans = temp->val;
               if(temp->right) q.push(temp->right);
               if(temp->left) q.push(temp->left);
           }
        }
        return ans;
    }
};

