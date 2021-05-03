Node *lca(Node *root, int v1,int v2) {
		// Write your code here.
        if(root == NULL) return NULL; 
        if(root->data == v1 || root->data == v2) return root;
        
        Node * leftSearchResult = lca(root->left, v1,v2);
        Node * rightSearchResult = lca(root->right, v1,v2);
        
        if(leftSearchResult == NULL) return rightSearchResult;
        if(rightSearchResult == NULL) return leftSearchResult;
        
        
        
        return root;
    }
