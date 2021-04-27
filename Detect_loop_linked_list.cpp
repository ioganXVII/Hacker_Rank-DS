//  https://www.geeksforgeeks.org/detect-loop-in-a-linked-list/
bool has_cycle(SinglyLinkedListNode* head) {
    
    
    SinglyLinkedListNode* slow_p = head->next;
    SinglyLinkedListNode* fast_p = head->next->next;
    
    
    while (slow_p && fast_p && fast_p->next) {
        slow_p = slow_p->next;
        fast_p = fast_p->next->next;
        if (slow_p == fast_p) {
            return 1;
        }
    }
    return 0;
}
