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
void inorder(struct TreeNode* root, int** result, int* index) {
    if (root == NULL) {
        return;
    }
    inorder(root->left, result, index);
    
    (*result)[(*index)++] = root->val;

    inorder(root->right, result, index);
}

int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    *returnSize = 0;
    int* result = malloc(100 * sizeof(int));
    if (result == NULL) {
        return NULL;
    }
    
    int index = 0;
    inorder(root, &result, &index);
    
    *returnSize = index;

    return result;
}