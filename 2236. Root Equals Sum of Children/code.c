/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool checkTree(struct TreeNode* root) {
    if (!root || !root->left || !root->right) {
        return false;
    }
    return root->val == root->right->val + root->left->val;
}