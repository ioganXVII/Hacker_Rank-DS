int height(Node* root) {
        // Write your code here.
        if(!root) return -1;
        return max(1+height(root->left), 1+height(root->right));
    }
