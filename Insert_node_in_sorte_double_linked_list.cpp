DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* head, int data) {
    if(!head)return head;
    
    DoublyLinkedListNode* ins_node = new DoublyLinkedListNode(data);
    
    if(head->data >= ins_node->data){
        ins_node->next = head;
        ins_node->prev = head->prev;
        head->prev = ins_node;
        return ins_node;
    }
    
    DoublyLinkedListNode* temp = head;
    
    while(temp != NULL){
        if(temp->data >= ins_node->data){
            temp->prev->next = ins_node;
            ins_node->prev = temp->prev;
            temp->prev = ins_node;
            ins_node->next = temp;
            
            
            break;
        }
        else if(temp->next == NULL){
            temp->next = ins_node;
            ins_node->prev = temp;
            break;
        }
        temp = temp->next;
        
    }
    
    
    
    return head;
}
