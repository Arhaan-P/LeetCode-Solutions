/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

struct TreeNode* findMin(struct TreeNode* root) {
    while(root && root->left) {
        root = root->left;
    }
    return root;
}

struct TreeNode* deleteNode(struct TreeNode* root, int key) {
    if (root == NULL) {
        return root;
    }
    else if (key < root->val) {
        root->left = deleteNode(root->left, key);
    }
    else if (key > root->val) {
        root->right = deleteNode(root->right, key);
    }
    else {
        if (!root->left && !root->right) {
            free(root);
            root = NULL;
        }
        else if (!root->left) {
            struct TreeNode* Y = root;
            root = root->right;
            free(Y);
        }
        else if (!root->right) {
            struct TreeNode* Y = root;
            root = root->left;
            free(Y);
        }
        else {
            struct TreeNode* Y = findMin(root->right);
            root->val = Y->val;
            root->right = deleteNode(root->right, Y->val);
        }
    }
    return root;
}