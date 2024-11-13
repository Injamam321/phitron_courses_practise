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
int main()
{
    node* a = new node(5);
    node* b = new node(10);
    node* c = new node(15);
    
    a->next=b;
    b->next=c; 
    c->next=NULL;

    node* tmp=a;

    while(tmp!= NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }

    return 0;
}