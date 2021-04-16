void reversePrint(SinglyLinkedListNode* head) {
    vector<int> temp_1;
    SinglyLinkedListNode* temp_2 = head;
    while(temp_2->next!=NULL){
        temp_1.push_back(temp_2->data);
        temp_2 = temp_2->next;
    }
        temp_1.push_back(temp_2->data);
    while(temp_1.size() != 0){
        cout << temp_1.back() << endl;
        temp_1.pop_back();
    }
}
