

//988. Smallest String Starting From Leaf

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <climits>

using namespace std;
class TreeNode {
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    
    TreeNode(int x) {
        val = x;
        left = NULL;
        right = NULL;
    }
};

class Solution {
public:
    vector<string> ans;
    
    void f(TreeNode* root, int &mini) {
        if (!root) return;
        if (!root->left && !root->right) {
            mini = min(mini, root->val);
        }
        f(root->left, mini);
        f(root->right, mini);
    }
    
    void dfs(TreeNode* root, int ch, string s) {
        if (!root) return;
        if (root->val == ch && !root->left && !root->right) {
            s = char(ch + 'a') + s;
            ans.push_back(s);
        }
        dfs(root->left, ch, char(root->val + 'a') + s);
        dfs(root->right, ch, char(root->val + 'a') + s);
    }
    
    string smallestFromLeaf(TreeNode* root) {
        int mini = INT_MAX;
        f(root, mini);
        dfs(root, mini, "");
        sort(ans.begin(), ans.end());
        return ans[0];
    }
};

TreeNode* constructTree(vector<int>& nodes, int idx) {
    if (idx >= nodes.size() || nodes[idx] == -1) return NULL;
    
    TreeNode* root = new TreeNode(nodes[idx]);
    root->left = constructTree(nodes, 2 * idx + 1);
    root->right = constructTree(nodes, 2 * idx + 2);
    return root;
}

int main() {
//     Input: root = [2,2,1,null,1,0,null,0]
//     Output: "abc"
    int n;cin>>n;
    vector<int>arr(n);
    for(int i =0;i<n;i++) cin>>arr[i];
    TreeNode* root = constructTree(arr, 0);
    Solution sol;
    string result = sol.smallestFromLeaf(root);
    cout << "Output: " << result << endl;
    return 0;
}
