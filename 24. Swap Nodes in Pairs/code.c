/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapPairs(struct ListNode* head) {
    if (!head || !head->next) {
        return head;
    }
    struct ListNode* newHead = head->next;
    struct ListNode* prev = NULL;
    struct ListNode* temp = head;

    while(temp && temp->next) {
        struct ListNode* first = temp;
        struct ListNode* second = temp->next;
        
        first->next = second->next;
        second->next = first;

        if (prev) {
            prev->next = second;
        }

        prev = first;
        temp = first->next;
    }
    return newHead;
}