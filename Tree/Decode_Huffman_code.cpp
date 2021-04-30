void decode_huff(node * root, string s) {
    int i = 0; 

    for(node * elem = root; i <= s.size();i++){
        if(elem->data){
            cout << elem->data;
            elem = root;
        }
        if(s[i] == '0'){
            elem = elem->left;
        }
        if(s[i] == '1'){
            elem = elem->right;
        }
        
    }
}
