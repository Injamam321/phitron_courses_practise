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
void insert_at_tail(node* &head,int v)
{
    node* newnode =new node(v);
    if(head==NULL)
    {
        head=newnode;
        cout<<endl<<" Insert at head "<<endl<<endl;
        return;
    }
    node *tmp=head;
    while (tmp->next!=NULL)
    {
        tmp=tmp->next;
    }
    //tmp akhon last node a 
    tmp->next=newnode;
    cout<<endl<<" Insert at tail "<<endl<<endl;

}
void print_linked_list(node* head)
{
    cout<<"your linked list : ";
    node* tmp=head;
    while (tmp!=NULL)
    {
       cout<<tmp->val<<" ";
       tmp=tmp->next;
    }
    cout<<endl;
    
}
void insert_at_position(node* head, int pos, int v)
{
    node* newnode = new node(v);
    node* tmp=head;
    for (int  i = 0; i < pos-1; i++)
    {
        tmp = tmp->next;
    }
    newnode->next=tmp->next;
    tmp->next=newnode;
    cout<<endl<<endl<< " insert at position "<<pos<<endl<<endl;
    
}
void insert_at_head(node* &head,int v)
{
    node* newnode= new node(v);
    newnode->next = head;
    head = newnode;
    cout<<endl<<" insert at head"<<endl<<endl;

}
void  delete_from_position(node* head, int pos)
{
    node* tmp = head;
    for (int i = 0; i < pos-1; i++)
    {
        tmp=tmp->next;
    }
    node* deletenode = tmp->next;
    tmp->next=tmp->next->next;
    delete deletenode;
    cout<<endl<<"Delete position"<<pos<<endl<<endl;
}
void delete_head(node* head)
{
    node* deletenode=head;
    head=head->next;
    delete deletenode;
    cout<<endl<<"Delete head"<<endl<<endl;

}
int main()
{
    node*  head = NULL;
   while (true)
   {
        cout<<"option 1: insert at tail"<<endl;
        cout<<"option 2: print linked list "<<endl;
        cout<<"option 3: insert at any position"<<endl;
        cout<<"option 4: insert at head"<<endl;
        cout<<"option 5: delete from position"<<endl;
        cout<<"option 6: delete head "<<endl;
        cout<<"option 7: terminate "<<endl;

        int op;
        cin>>op;
        if(op==1)
        {
            cout<<"please enter value : ";
            int v;
            cin>>v;
            insert_at_tail(head ,v);
        }
        else if(op==2)
        {
            print_linked_list(head);
        }
        else if (op==3)
        {
            int pos,v;
            cout<<"Enter position : ";
            cin>>pos;
            cout<<"Enter value : ";
            cin>>v;
            if(pos==0)
            {
                insert_at_head(head,v);
            }
            else
            {
                insert_at_position(head,pos,v); 
            }

        }
        else if(op==4)
        {
            int v;
            cout<<"Enter value : ";
            cin>>v;
            insert_at_head(head,v);

        }
        else if(op==5)
        {
            int pos;
            cout<<"Enter position : ";
            cin>>pos;
            if(pos==0)
            {
                delete_head(head);
            }
           else
           {
                delete_from_position(head,pos);
           }
        }
        else if(op==6)
        {
           delete_head(head);
        }
        else if(op==7)
        {
             break;
        }
   }
   
    return 0;
}