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
int main()
{
  node* head=NULL;
  node* tail=NULL;
  int val;
  while (true) //o(n)
  {
    cin>>val;
    if(val == -1) break;
    insert_tail(head, tail,val); //o(1)
  }
  print_linked_list(head);
  
    return 0;
}