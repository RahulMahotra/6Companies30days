void linkdelete(struct Node  *head, int M, int N)
    {
      if(head == NULL) return;
       
      Node* curr = head;
      int m = M-1;
       
      while(curr != NULL and m--){
          curr = curr->next;
      }
       
      if(curr ==   NULL) return;
       
      Node* temp = curr;
       
      while(N-- and curr!=NULL){
          curr = curr->next;
      }
      
      if(curr == NULL) {
          temp->next = NULL;
        return;
      }
      
      temp->next = curr->next;

       
    }
