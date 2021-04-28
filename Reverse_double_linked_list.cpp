DoublyLinkedListNode* reverse(DoublyLinkedListNode* head) {
    DoublyLinkedListNode* last_elem = head;
    DoublyLinkedListNode* first_elem = head;
    while(head->next!=NULL){
        head=head->next;
        first_elem = head;
    }
   
   
    while(true){
        if(head == last_elem){
            DoublyLinkedListNode* temp_1 = head->prev;
            DoublyLinkedListNode* temp_2 = head->next;
            
            head->next = temp_1;
            head->prev = temp_2; 
            break;
        }
        DoublyLinkedListNode* temp_1 = head->prev;
        DoublyLinkedListNode* temp_2 = head->next;
        
        head->next = temp_1;
        head->prev = temp_2;
       
        head = temp_1;
       
   }
   
   
   return first_elem;
}
