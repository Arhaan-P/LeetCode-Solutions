/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int findMin (struct TreeNode* root) {
    if (root == NULL) {
        return INT_MAX;
    }
    int ans = root->val;
    int leftMin = findMin (root->left);
    int rightMin = findMin (root->right);
    if (leftMin < ans) {
        ans = leftMin;
    }
    if (rightMin < ans) {
        ans = rightMin;
    }
    return ans;
}

int findMax (struct TreeNode* root) {
    if (root == NULL) {
        return INT_MIN;
    }
    int ans = root->val;
    int leftMax = findMax (root->left);
    int rightMax = findMax (root->right);
    if (leftMax > ans) {
        ans = leftMax;
    }
    if (rightMax > ans) {
        ans = rightMax;
    }
    return ans;
}

bool isValidBST(struct TreeNode* root) {
    if (root == NULL) {
        return true;
    }
    if (root->left != NULL && findMax(root->left) >= root->val) {
        return false;
    }
    if (root->right != NULL && findMin (root->right) <= root->val) {
        return false;
    }
    if (!isValidBST(root->left) || !isValidBST(root->right)) {
        return false;
    }
    return true;
}