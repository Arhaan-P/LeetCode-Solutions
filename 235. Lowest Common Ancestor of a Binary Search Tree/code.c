/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

struct TreeNode* lowestCommonAncestor(struct TreeNode* root, struct TreeNode* p, struct TreeNode* q) {
    int n1 = p->val;
    int n2 = q->val;
    if (root == NULL) {
        return NULL;
    }
    if (root->val > n1 && root->val > n2) {
        return lowestCommonAncestor(root->left, p, q);
    }
    if (root->val < n1 && root->val < n2) {
        return lowestCommonAncestor(root->right, p, q);
    }
    return root;
}