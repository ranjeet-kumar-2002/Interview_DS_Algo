class Solution {
public:
    bool isEvenOddTree(TreeNode* root) {
        queue<TreeNode*> q;
         bool is_even = true;
        q.push(root);
        while (!q.empty()) {
            int n = q.size();
            int prev;
            if(is_even) prev = INT_MIN;
            else prev = INT_MAX;
            for (int i = 0; i < n; i++) {
               TreeNode* temp = q.front();q.pop();
               if(is_even && (temp->val%2==0 || temp->val<=prev)) return false;//Evenindx 
               if(!is_even && (temp->val%2!=0 || temp->val>=prev)) return false; //oddindex
                prev = temp->val;
                if(temp->left) q.push(temp->left); 
                if(temp->right) q.push(temp->right); 
            }
           is_even = !is_even;
        }
        return true;
    }
};

**************************DFS*******************************************
    
