void f(Node* root, vector<int>& ans) {
    if (!root) return;
    ans.push_back(root->data);
    if (root->left) f(root->left, ans);
    if (root->right) f(root->right, ans);
}

int getSize(Node* node) {
    vector<int> ans;
    f(node, ans);
    return ans.size();
}
