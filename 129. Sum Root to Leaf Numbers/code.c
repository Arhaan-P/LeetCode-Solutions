/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int traverse(struct TreeNode* root, int sum) {
    if (root == NULL) {
        return 0;
    }
    sum = sum * 10 + root->val;

    if (!root->left && !root->right) {
        return sum;
    }
    return traverse(root->left, sum) + traverse(root->right, sum);
}

int sumNumbers(struct TreeNode* root) {
    return traverse(root, 0);
}