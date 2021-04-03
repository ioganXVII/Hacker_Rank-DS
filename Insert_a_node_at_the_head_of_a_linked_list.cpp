SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {
    SinglyLinkedListNode* temp = new SinglyLinkedListNode(data);
    temp->next = NULL;
    
    if(llist != NULL) temp->next = llist;
    llist = temp;
    
    return llist;
}
