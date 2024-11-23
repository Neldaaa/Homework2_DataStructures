// Name: NELDA
// Student ID: 1123564
// Date of submission: 2024/11/27

#include <iostream>
#include <queue>
#include <vector>
using namespace std;

// Tree node structure
struct TreeNode {
    int val;                  // Value of the node
    TreeNode* left;           // Pointer to the left child
    TreeNode* right;          // Pointer to the right child
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// Function to build the binary tree from level-order input
TreeNode* buildTree(const vector<int>& values) {
    if (values.empty() || values[0] == -1) return NULL;
    TreeNode* root = new TreeNode(values[0]); // Create root node
    queue<TreeNode*> q; // Queue for level-order construction
    q.push(root);
    int i = 1;

    while (!q.empty() && i < values.size()) {
        TreeNode* current = q.front();
        q.pop();
        // Assign left child
        if (values[i] != -1) {
            current->left = new TreeNode(values[i]);
            q.push(current->left);
        }
        i++;
        // Assign right child
        if (i < values.size() && values[i] != -1) {
            current->right = new TreeNode(values[i]);
            q.push(current->right);
        }
        i++;
    }
    return root;
}

// Helper function to calculate height and diameter
int diameterHelper(TreeNode* root, int& diameter) {
    if (!root) return 0; // Base case: null nodes have height 0
    int leftHeight = diameterHelper(root->left, diameter);   // Height of left subtree
    int rightHeight = diameterHelper(root->right, diameter); // Height of right subtree
    // Update the diameter to be the maximum of the current diameter and the path through this node
    diameter = max(diameter, leftHeight + rightHeight);
    return 1 + max(leftHeight, rightHeight); // Return height of this subtree
}

// Function to calculate the diameter of the binary tree
int diameterOfBinaryTree(TreeNode* root) {
    int diameter = 0;
    diameterHelper(root, diameter);
    return diameter; // This represents the number of edges in the longest path
}

int main() {
    vector<int> values = {11, 12, 13, 14, 15, -1, -1, -1, -1, 16, 17};
    TreeNode* root = buildTree(values); // Build the tree
    cout << "Diameter: " << diameterOfBinaryTree(root) << endl;
    return 0;
}
