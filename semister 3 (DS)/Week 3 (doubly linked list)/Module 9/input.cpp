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
    node* tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void print_reverse(node* tail)
{
    node* tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}
void insert_at_tail(node* &head, node* &tail, int val)
{
    node* newNode = new node(val);
    if (head == NULL)
    {
        head = tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}
int main()
{
  node* head =NULL;
  node* tail=NULL;
  int val;
  while (true)
  {
    cin>>val;
    if(val==-1)break;
    insert_at_tail(head,tail,val);

    
  }
    print_linear(head);
    print_reverse(tail);
  
    return 0;
}