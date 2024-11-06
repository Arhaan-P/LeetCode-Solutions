/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

struct TreeNode* helper(int* inorder, int inorderstart, int inorderend, int* postorder, int postorderstart, int postorderend) {
    if (inorderstart > inorderend || postorderstart > postorderend) {
        return NULL;
    }

    int root_data = postorder[postorderend];
    struct TreeNode* root = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    root->val = root_data;
    root->left = NULL;
    root->right = NULL;

    int rootInOrder = inorderstart;
    while (inorder[rootInOrder] != root_data) {
        rootInOrder++;
    }

    int left = rootInOrder - inorderstart;

    root->left = helper(inorder, inorderstart, rootInOrder - 1, postorder, postorderstart, postorderstart + left - 1);
    root->right = helper(inorder, rootInOrder + 1, inorderend, postorder, postorderstart + left, postorderend - 1);

    return root;
}

struct TreeNode* buildTree(int* inorder, int inorderSize, int* postorder, int postorderSize) {
    return helper(inorder, 0, inorderSize - 1, postorder, 0, postorderSize - 1);
}