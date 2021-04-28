int getNode(SinglyLinkedListNode* head, int positionFromTail) {
    int size_head = 0;
    int result;
    SinglyLinkedListNode* temp = head;
    
    while(temp->next != NULL){
        size_head++;
        temp = temp->next;
    }
    
    for(;size_head > positionFromTail; size_head--){
        head = head->next;
    }
    return result = head->data;
}
