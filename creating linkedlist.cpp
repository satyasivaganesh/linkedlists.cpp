#include <iostream>
using namespace std;
struct Listnode{
    int val;
    Listnode* next;
};

int main() {
    Listnode *head,*first,*second;
    head=new Listnode();
    first=new Listnode();
    second=new Listnode();
    head->val=10;
    head->next=first;
    first->val=20;
    first->next=second;
    second->val=30;
    second->next=NULL;
    for(;head!=NULL;){
        cout<<head->val<<' ';
        head=head->next;
    }
	return 0;
}
