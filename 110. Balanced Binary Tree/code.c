/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int height(struct TreeNode* root) {
    if (!root) {
        return 0;
    }

    int lh = height(root->left);
    int rh = height(root->right);

    if (lh == -1 || rh == -1 || abs(lh - rh) > 1) {
        return -1;
    }

    return 1 + fmax(lh, rh);
}

bool isBalanced(struct TreeNode* root) {
    return height(root) != -1;
}