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
void print_linked_list(node *head) //o(n)
{
    node* tmp=head;
    while (tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
    
}
int size(node *head) //o(n)
{
    node *tmp=head;
    int count=0;
    while (tmp!=NULL)
    {
        /* code */count ++;
        tmp=tmp->next;
    }
    return count;
    
}
void insert(node *head, int pos, int val) //o(n)
{
    node* newnode= new node(val);
    node *tmp=head;
    for (int i = 1; i <= pos-1; i++)
    {
        tmp=tmp->next;
    }
    //cout << tmp->val <<endl; 
    //tmp=pos-1;
    newnode->next = tmp->next;
    tmp->next = newnode;

    
}
void insert_head(node *&head, int val)//o(1)
{
    node *newnode =new node(val);
    newnode->next=head;
    head=newnode;
}
void insert_tail(node* &head, node* &tail, int val) //o(1)
{
    node* newnode= new node (val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next=newnode;
    tail=newnode;

}
int main()
{

    node *head = new node(10);
    node *a = new node(20);
    node *b = new node (30);
    node *c = new node (40);
    node *d = new node (50);
    node *tail = d;
    head->next=a;
    a->next=b;
    b->next=c;
    c->next=d;
    
    print_linked_list(head);

    cout<<" tail-> "<<tail->val<<endl;
    
    //insert(head,2,100);
    int pos,val;
    cin>>pos>>val;
    if (pos>size(head))
    {
        /* code */cout<<"invalid index";

    }
    else if ( pos == 0 )
    {
        insert_head (head,val);
    }
    else if (pos == size(head))
    {
        insert_tail( head, tail, val);
    }
    else
    {
        insert(head,pos,val);
    }
    
    cout<<" tail-> "<<tail->val<<endl;
    
    print_linked_list(head);


    return 0;
}