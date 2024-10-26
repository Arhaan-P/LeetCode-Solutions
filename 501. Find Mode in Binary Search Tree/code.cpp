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
class Solution {
public:

    void inorder(TreeNode* root, map<int, int>& f) {
        if (!root) return;
        inorder(root->left, f);
        f[root->val]++;
        inorder(root->right, f);
    }

    vector<int> findMode(TreeNode* root) {
        map<int, int> mp;
        inorder(root, mp);
        vector<int> ans;
        int maxx = 0;
        for (const auto& i : mp) {
            if (i.second > maxx) {
                maxx = i.second;
                ans.clear();
                ans.push_back(i.first);
            }
            else if (i.second == maxx) {
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};