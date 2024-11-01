/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int max(int a, int b) {
    return a > b ? a : b;
}

int maxDepth(struct TreeNode* root) {
    if (!root) {
        return 0;
    }
    int lh = maxDepth(root->left);
    int rh = maxDepth(root->right);
    return max(lh, rh) + 1;
}