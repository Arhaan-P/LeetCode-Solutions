/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int maxx(int a, int b) {
    return (a > b) ? a : b;
}

int compare(const void* a, const void* b) {
    long long valA = *(const long long*)a;
    long long valB = *(const long long*)b;
    return (valA < valB) - (valA > valB);
}

void preOrder(struct TreeNode* root, long long* sums, int curLevel, int* maxDepth) {
    if (root == NULL) {
        return;
    }
    sums[curLevel] += root->val;
    preOrder(root->left, sums, curLevel + 1, maxDepth);
    preOrder(root->right, sums, curLevel + 1, maxDepth);
    *maxDepth = maxx(*maxDepth, curLevel + 1);
}

long long kthLargestLevelSum(struct TreeNode* root, int k) {
    if (root == NULL) return -1;

    int maxLevels = 0; 
    long long* sums = (long long*)calloc(100000, sizeof(long long));
    preOrder(root, sums, 0, &maxLevels);

    qsort(sums, maxLevels, sizeof(long long), compare);
    long long result;
    if (k - 1 < maxLevels) {
        result = sums[k - 1];
    } 
    else {
        result = -1;
    }
    
    free(sums);
    return result;
}