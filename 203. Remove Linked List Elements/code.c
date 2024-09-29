/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode* temp = (struct ListNode*)malloc(sizeof(struct ListNode));
    temp->next = head;

    struct ListNode* current = temp;

    while (current->next != NULL) {
        if (current->next->val == val) {
            current->next = current->next->next;
        }
        else {
            current = current->next;
        }
    }
    return temp->next;
}