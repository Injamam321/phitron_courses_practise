#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
        int val;
        node* next;
    node(int val)
    {
        this->val=val;
        this->next=NULL;

    }
};
void insert_at_tail(node* &head, int val)
{
    node* newnode =new node(val);
    if(head==NULL)
    {
        head=newnode;
    }
    node* tmp=head;
    while (tmp->next!=NULL)
    {
        tmp=tmp->next;
        
    }
    tmp->next=newnode;
    
}
void print_linked_list(node* head)
{
    node* tmp=head;
     while(tmp!= NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }

}
int main()
{
    node* head = NULL;

    insert_at_tail(head,10);
    insert_at_tail(head,20);
     insert_at_tail(head,30);
      insert_at_tail(head,40);
       insert_at_tail(head,50);
        insert_at_tail(head,60);
         insert_at_tail(head,70);

    

    print_linked_list(head);
  
    return 0;
}