   void bfs(queue<Node *> &q, int &cnt){
    cnt++;
    int size = q.size();
    while(size--){
        Node *curr = q.front();
        q.pop();
        if(curr->left) q.push(curr->left);
        if(curr->right) q.push(curr->right);
    }
}

bool burnTree(Node *root, int target, int &cnt, queue<Node *> &q){
    if(root == NULL)
        return false;
    
    if(root->data == target){

        if(root->left) q.push(root->left);
        if(root->right) q.push(root->right);
        return true;
    }
    
    if(burnTree(root->left, target, cnt, q)){
        bfs(q, cnt);
       
        if(root->right) q.push(root->right);
        return true;
    }
    else if(burnTree(root->right, target, cnt, q)){
        bfs(q, cnt);

        if(root->left) q.push(root->left);
        return true;
    }
    
}

int minTime(Node* root, int target) {
    
    int cnt=0;
    queue<Node *> q;
    
    burnTree(root, target, cnt, q);
    
    while(!q.empty())   bfs(q, cnt);
    
    return cnt;
}
