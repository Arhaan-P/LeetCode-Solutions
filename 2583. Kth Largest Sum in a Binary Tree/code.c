/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int compare(const void* a, const void* b) {
    long long valA = *(const long long*)a;
    long long valB = *(const long long*)b;
    return (valA < valB) - (valA > valB);
}
long long kthLargestLevelSum(struct TreeNode* root, int k) {
    if (root == NULL) return -1;

    long long* sums = (long long*)calloc(100000, sizeof(long long));
    int maxLevels = 0;
    struct TreeNode** queue = (struct TreeNode**)malloc(100000 * sizeof(struct TreeNode*));
    int front = 0, rear = 0;

    queue[rear++] = root;

    while (front < rear) {
        int levelSize = rear - front;
        sums[maxLevels] = 0;

        for (int i = 0; i < levelSize; i++) {
            struct TreeNode* current = queue[front++];
            sums[maxLevels] += current->val;

            if (current->left != NULL) {
                queue[rear++] = current->left;
            }
            if (current->right != NULL) {
                queue[rear++] = current->right;
            }
        }
        maxLevels++;
    }

    qsort(sums, maxLevels, sizeof(long long), compare);
    
    long long result;
    if (k - 1 < maxLevels) {
        result = sums[k - 1];
    } 
    else {
        result = -1;
    }

    free(sums);
    free(queue);
    return result;
}