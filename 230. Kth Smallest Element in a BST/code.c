/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

void inOrder (struct TreeNode* root, int* count, int k, int* ans) {
    if (root == NULL) {
        return;
    }
    inOrder (root->left, count, k, ans);

    (*count)++;
    if (*count == k) {
        *ans = root->val;
        return;
    }
    inOrder (root->right, count, k, ans);
}

int kthSmallest(struct TreeNode* root, int k) {
    int count = 0;
    int ans = -1;
    inOrder (root, &count, k, &ans);

    return ans;
}