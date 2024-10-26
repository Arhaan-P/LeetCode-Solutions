/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

void inOrder(struct TreeNode* root, int* arr, int* k) {
    if (root == NULL) {
        return;
    }
    inOrder(root->left, arr, k);
    arr[(*k)++] = root->val;
    inOrder(root->right, arr, k);
}

bool findTarget(struct TreeNode* root, int target) {
    int* arr = (int*)malloc(10000 * sizeof(int));
    int k = 0;
    inOrder(root, arr, &k);

    int i = 0;
    int j = k - 1;

    while(i < j) {
        int curSum = arr[i] + arr[j];

        if (curSum == target) {
            return true;
        }
        else if (curSum < target) {
            i++;
        }
        else {
            j--;
        }
    }
    return false;
}