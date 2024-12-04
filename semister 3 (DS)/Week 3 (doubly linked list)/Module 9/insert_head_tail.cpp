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
void insert_at_position(node* head,int pos,int val)
{
    node* newNode=new node(val);
    node* tmp=head;
    for (int i = 1; i <= pos-1; i++)
    {
       tmp=tmp->next; 
    }
    //cout<<tmp->val<<endl;
   newNode->next=tmp->next; //100->30
   tmp->next=newNode; //20->100
   newNode->next->prev=newNode; //100-<30
   newNode->prev=tmp; // 20<-100
    

}
int size(node* head)
{
    node *tmp=head;
    int cnt=0;
    while (tmp!=NULL)
    {   
        cnt++;
        tmp=tmp->next;
        
    }
    return cnt;
    
}
void insert_at_head(node* &head, int val)
{
    node* newNode= new node(val);
    if (head==NULL)
    {
        head=newNode;
        return;
    }
    
    newNode->next=head;
    head->prev=newNode;
    head=newNode;

}
void insert_at_tail(node* &tail, int val)
{
    node* newNode = new node(val);
    tail->next=newNode;
    newNode->prev=tail;
    tail=newNode;
}
int main()
{
    node* head=new node(10);
    node* a =new node(20);
    node* b =new node(30);
    node* c=new node(40);

    node* tail=c;
    
    
    //connection

    head->next=a;
    a->prev=head;
    a->next=b;
    b->prev=a;
    b->next=c;
    c->prev=b;

// Finding the tail of the linked list
    int pos,val;
    cin>>pos>>val;

    if (pos==0)
    {
        insert_at_head(head,val);
    }
    else if(pos==size(head))
    {
        insert_at_tail(tail,val);
    }
    
    else if(pos >= size(head))
    {
        cout<<"invalid position "<<endl;
    }
    else
    {
         insert_at_position(head,pos,val);
    }

   

    print_linear(head);
    print_reverse(tail);
    



  
    return 0;
}