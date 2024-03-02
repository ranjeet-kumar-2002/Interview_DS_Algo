Boundary Traversal of binary tree
class Solution {
public:
    void findleftboundry(Node* root, vector<int>& ans) {
        if (!root) return;
        if (root->left == NULL && root->right == NULL) return;
        ans.push_back(root->data);
        if (root->left) findleftboundry(root->left, ans);
        else if (root->right) findleftboundry(root->right, ans);
    }

    void findleafnode(Node* root, vector<int>& ans) {
        if (!root) return;
        if (root->right == NULL && root->left == NULL) {
            ans.push_back(root->data);
            return;
        }
        if (root->left) findleafnode(root->left, ans);
        if (root->right) findleafnode(root->right, ans);
    }

    void findrightboundry(Node* root, vector<int>& ans) {
        if (!root) return;
        if (root->right == NULL && root->left == NULL) return;
        if (root->right) findrightboundry(root->right, ans);
        else if (root->left) findrightboundry(root->left, ans);
        ans.push_back(root->data);
    }

    vector<int> Boundry(Node* root) {
        vector<int> ans;
        ans.push_back(root->data);
        findleftboundry(root->left, ans);
        if(root->left || root->right) findleafnode(root, ans); 
        //if root =only one node if(root->left || root->right) if root=1 then ans should be 1 only
        findrightboundry(root->right, ans);
        return ans;
    }

    vector<int> boundary(Node* root) {
        return Boundry(root);
    }
};
