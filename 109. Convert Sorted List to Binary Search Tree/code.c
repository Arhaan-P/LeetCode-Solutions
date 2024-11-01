/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

struct ListNode* middle(struct ListNode* head) {
    struct ListNode* slow = head;
    struct ListNode* fast = head;
    struct ListNode* prev = NULL;
    while(fast && fast->next) {
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }
    if (prev) {
        prev->next = NULL;
    }
    return slow;
}

struct TreeNode* sortedListToBST(struct ListNode* head) {
    if (!head) {
        return NULL;
    }
    struct ListNode* mid = middle(head);
    struct TreeNode* root = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    root->val = mid->val;
    
    if(head == mid) {
        root->left = NULL;
        root->right = NULL;
    }
    else {
        root->left = sortedListToBST(head);
        root->right = sortedListToBST(mid->next); 
    }
    return root;
}