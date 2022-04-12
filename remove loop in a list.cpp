class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        Node *temp;
        temp=head;
        while(temp)
        {
            if(temp->next==NULL)break;
            if(temp->next->data<0)
            {
                temp->next=NULL;
                break;
            }
            temp->data=-1*temp->data;
            temp=temp->next;
        }
    }
};
