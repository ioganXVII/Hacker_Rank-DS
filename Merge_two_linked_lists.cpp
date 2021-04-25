SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode* result_node = new SinglyLinkedListNode(0);
    
    if(head1 == NULL){
        return head2;
    }
    if (head2 == NULL) {
        return head1;
    }
    if(head1->data <= head2->data){
        result_node = head1;
        result_node->next = mergeLists(head1->next, head2);
    }
    else{
        result_node = head2;
        result_node->next = mergeLists(head1, head2->next);
    }
    
    return result_node;
}
