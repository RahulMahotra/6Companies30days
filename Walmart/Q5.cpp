int sum(Node* root){
        if(root == NULL)return 0;
        return sum(root->left)+sum(root->right)+root->data;
    }
   
    void toSumTree(Node *root){
        
        if(root == NULL) return;
        
        root->data = sum(root) - root->data;
        
        toSumTree(root->left);
        toSumTree(root->right);
    }
