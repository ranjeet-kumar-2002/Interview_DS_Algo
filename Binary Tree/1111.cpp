#include <iostream>
#include <queue>

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// Function to construct a binary tree from input values
TreeNode* constructTree() {
    int n; // Number of nodes
    std::cin >> n;

    std::vector<TreeNode*> nodes(n);
    for (int i = 0; i < n; ++i) {
        int val;
        std::cin >> val;
        nodes[i] = new TreeNode(val);
    }

    for (int i = 0; i < n; ++i) {
        int leftIdx, rightIdx;
        std::cin >> leftIdx >> rightIdx;
        if (leftIdx != -1) {
            nodes[i]->left = nodes[leftIdx];
        }
        if (rightIdx != -1) {
            nodes[i]->right = nodes[rightIdx];
        }
    }

    return nodes[0]; // Root of the binary tree
}

int main() {
    TreeNode* root = constructTree();
    // Now you can use the 'root' to solve the problem.
    // Call your 'sumNumbers' function or any other relevant logic.
    return 0;
}
