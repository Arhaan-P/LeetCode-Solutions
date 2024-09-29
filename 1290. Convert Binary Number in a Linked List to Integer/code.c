/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int getDecimalValue(struct ListNode* head) {
    struct ListNode* current = head;

    int arr[30];
    int k = 0;
    while (current != NULL) {
        arr[k++] = current->val;
        current = current->next;
    }
    int ans = 0;
    int power = 0;
    for (int i = k - 1; i >= 0; i--) {
        ans += (int) pow(2, power++) * arr[i];
    }
    return ans;
}