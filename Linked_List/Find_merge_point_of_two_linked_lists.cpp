int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    
    SinglyLinkedListNode* ptr_1 = head1;
    SinglyLinkedListNode* ptr_2 = head2;
    
    
    while(ptr_1 != ptr_2){
        ptr_1 = ptr_1->next;
        ptr_2 = ptr_2->next;
    
        if(ptr_1 == ptr_2) return ptr_1->data;
        
        if(ptr_1 == NULL) ptr_1 = head2;
        
        if(ptr_2 == NULL) ptr_2 = head1;
        
    }
    
    return ptr_1->data;
}
