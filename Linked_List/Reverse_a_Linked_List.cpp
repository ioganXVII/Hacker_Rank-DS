// Complete the reverse function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* reverse(SinglyLinkedListNode* head) {
    vector<SinglyLinkedListNode*> nodes;
    SinglyLinkedListNode* temp_1 = head;
    
    
    nodes.push_back(head);
    
    while(temp_1->next!=NULL){
        nodes.push_back(temp_1->next);
        temp_1 = temp_1->next;
    }
    
    head->next = NULL;
    
    for(int i = nodes.size()-1; i > 0;i--){
        nodes[i]->next = nodes[i-1];
    }
    
    return temp_1;
}
