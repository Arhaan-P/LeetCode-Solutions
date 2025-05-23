/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    bool isSymmetric(TreeNode *root)
    {
        return helper(root->left, root->right);
    }
    bool helper(TreeNode *x, TreeNode *y)
    {
        if (!x && !y)
        {
            return true;
        }
        if (!x || !y)
        {
            return false;
        }
        return x->val == y->val && helper(x->left, y->right) && helper(x->right, y->left);
    }
};