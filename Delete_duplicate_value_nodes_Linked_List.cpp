SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* head) {
    SinglyLinkedListNode* temp_1 = head;
    SinglyLinkedListNode* temp_2 = head->next;
    
    while(temp_1->next != NULL){
        if(temp_1->data == temp_2->data){
            
            temp_1->next = temp_2->next;
            free(temp_2);
            temp_2 = temp_1->next;
        }
        else
        {    
            temp_1 = temp_1->next;
            temp_2 = temp_2->next;
        }
    }
