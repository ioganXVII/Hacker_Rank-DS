void levelOrder(Node * root) {
        queue<Node*> q_temp;
        q_temp.push(root);
        while(!q_temp.empty()){
            Node * temp_node = q_temp.front();
            cout << temp_node->data << " ";
            if(temp_node->left != NULL) 
                q_temp.push(temp_node->left);
            if(temp_node->right != NULL)
                q_temp.push(temp_node->right);
            q_temp.pop();  
        }
    }
