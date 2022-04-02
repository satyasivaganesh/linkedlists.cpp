void moveZeroes(struct Node **head)
{
    Node *temp,*zero;
    temp=*head;
    while(temp->next)
    {
        if(temp->next->data==0)
        {
            zero=temp->next;
            temp->next=zero->next;
            zero->next=*head;
            *head=zero;
        }
        else
        {
        temp=temp->next;
        }
    }
    
    
}
