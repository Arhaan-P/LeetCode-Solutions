/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

struct TreeNode* helper(int* preorder, int preorderstart, int preorderend, int* inorder, int inorderstart, int inorderend) {
    
    if (preorderstart > preorderend || inorderstart > inorderend) {
        return NULL;
    }

    int root_data = preorder[preorderstart]; // First element in preorder is the root.

    struct TreeNode* root = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    root->val = root_data;
    root->left = NULL;
    root->right = NULL;

    int rootInOrder = inorderstart;

    while(inorder[rootInOrder] != root_data) {
        rootInOrder++; // Finding root in the inorder array
    }
    
    int left = rootInOrder - inorderstart;

    root->left = helper(preorder, preorderstart + 1, preorderstart + left, inorder, inorderstart, rootInOrder - 1);
    
    root->right = helper(preorder, preorderstart + left + 1, preorderend, inorder, rootInOrder + 1, inorderend);

    return root;
}

struct TreeNode* buildTree(int* preorder, int preorderSize, int* inorder, int inorderSize) {
    return helper(preorder, 0, preorderSize - 1, inorder, 0, inorderSize - 1);   
}