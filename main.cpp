#include <iostream>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
class Solution {
    
public:
    bool checkTree(TreeNode* root) {
        if (!root)
        return false;
        // get the values of left and right node
        int leftNode = root->left ? root->left->val : 0;
        int rightNode = root->right ? root->right->val : 0;
        return root->val == leftNode + rightNode;
    }
};

int main(){
  std::cout << "Hello world" << std::endl;

  TreeNode* root = new TreeNode(10);
    root->left = new TreeNode(4);
    root->right = new TreeNode(6);

    Solution solution;

    bool result = solution.checkTree(root);
    cout << (result ? "True" : "False") << endl;  // Output: True
  // Changing the tree to make the condition false
    root->left->val = 3;

    // Checking again
    result = solution.checkTree(root);
    cout << (result ? "True" : "False") << endl;  // Output: False

    // Clean up memory
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}
