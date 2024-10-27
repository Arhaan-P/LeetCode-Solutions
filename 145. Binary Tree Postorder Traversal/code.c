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

void postOrder(struct TreeNode* root, int* arr, int* k) {
    if (root == NULL) {
        return;
    }
    postOrder(root->left, arr, k);
    postOrder(root->right, arr, k);
    arr[(*k)++] = root->val;
}

int* postorderTraversal(struct TreeNode* root, int* returnSize) {
    int k = 0;
    int* arr = (int*)malloc(100 * sizeof(int));
    postOrder(root, arr, &k);
    *returnSize = k;
    return arr;
}