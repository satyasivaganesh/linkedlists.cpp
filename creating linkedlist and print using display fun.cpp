#include <iostream>
using namespace std;
struct Listnode{
    int val;
    Listnode *next;
};
void display(Listnode *head){
    while(head!=NULL){
        cout<<head->val<<' ';
        head=head->next;
    }
}

int main() {
    Listnode *head,*first,*second;
    head=new Listnode();
    first=new Listnode();
    second=new Listnode();
    head->val=1;
    head->next=first;
    first->val=2;
    first->next=second;
    second->val=3;
    second->next=NULL;
    display(head);
    
	return 0;
}
