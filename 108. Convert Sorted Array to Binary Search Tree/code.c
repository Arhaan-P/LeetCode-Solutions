/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

struct TreeNode* createNode(int val) {
    struct TreeNode* node = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    node->val = val;
    node->left = NULL;
    node->right = NULL;
    return node;
}

struct TreeNode* solve(int* nums, int left, int right) {
    if (left > right) {
        return NULL;
    }
    int mid = left + (right - left) / 2;
    struct TreeNode* root = createNode(nums[mid]);
    root->left = solve(nums, left, mid - 1);
    root->right = solve(nums, mid + 1, right);

    return root;
}

struct TreeNode* sortedArrayToBST(int* nums, int numsSize) {
    return solve(nums, 0, numsSize - 1);
}