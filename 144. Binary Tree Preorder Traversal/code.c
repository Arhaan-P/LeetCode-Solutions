/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

void preOrder(struct TreeNode* root, int* arr, int* k) {
    if (root == NULL) {
        return;
    }
    arr[(*k)++] = root->val;
    preOrder(root->left, arr, k);
    preOrder(root->right, arr, k);
}

int* preorderTraversal(struct TreeNode* root, int* returnSize) {
    int k = 0;
    int* arr = (int*)malloc(100 * sizeof(int));
    preOrder(root, arr, &k);
    *returnSize = k;
    return arr;
}