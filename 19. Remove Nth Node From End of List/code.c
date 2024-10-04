/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int length (struct ListNode* head) {
    int len = 0;
    struct ListNode* temp = head;
    while (temp != NULL) {
        len ++;
        temp = temp->next;
    }
    return len;
}
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    int l = length(head);
    struct ListNode* temp = head;

    if (n == l) {
        struct ListNode* newHead = head->next;
        free(head);
        return newHead;
    }

    for (int i = 0; i < l - n - 1; i++) {
        temp = temp->next;
    }
    struct ListNode* temp1 = temp->next;
    temp->next = temp1->next;
    free(temp1);
    return head;
}