/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

int length(struct ListNode* head) {
    int n = 0;
    struct ListNode* temp = head;
    while(temp) {
        n++;
        temp = temp->next;
    }
    return n;
}

struct ListNode* rotateRight(struct ListNode* head, int k) {

    if (!head || !head->next || k == 0) {
        return head;
    }

    if (k == 0) {
        return head;
    }

    int n = length(head);
    struct ListNode* temp = head;
    k = k % n;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = head;

    struct ListNode* temp1 = head;
    for (int i = 0; i  < n - k - 1; i++) {
        temp1 = temp1->next;
    }
    struct ListNode* newHead = temp1->next;
    temp1->next = NULL;
    return newHead;
}