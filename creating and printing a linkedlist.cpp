#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct Listnode{
    int val;
    Listnode *next;
};

int main() {
    int n;
    cin>>n;
    Listnode *head,*temp,*nn,*tem;
    head=new Listnode;
    cin>>head->val;
    temp=head;
    for(int i=1;i<n;i++)
    {
        nn=new Listnode;
        temp->next=nn;
        cin>>nn->val;
        temp=nn;
      
    }
    while(head!=NULL){
        cout<<head->val<<" ";
        head=head->next;
    }
    return 0;
}
    
