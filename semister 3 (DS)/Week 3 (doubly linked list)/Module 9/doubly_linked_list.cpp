#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
        int val;
        node* next;
        node* prev;

    node(int val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;


    }
};
void print_linear(node* head)
{
    node* tmp=head;
    while (tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;

    }
    cout<<endl;
}
void print_reverse(node* tail)
{
    node* tmp=tail;
    while (tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->prev;
    }
    cout<<endl;
    
}
int main()
{
    node* head=new node(10);
    node* a =new node(20);
    node* b =new node(30);
    node* tail=b;
    
    
    //connection

    head->next=a;
    a->prev=head;
    a->next=b;
    b->prev=a;

// Finding the tail of the linked list
    print_linear(head);
    print_reverse(tail);



  
    return 0;
}