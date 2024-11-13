#include<bits/stdc++.h>
using namespace std;

class node
{
public:
    int val;
    node* next;
    node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

class LinkedList 
{
public:
    LinkedList() 
{
    head = NULL;
    tail = NULL;
}


    void insert_Head(int val) 
    {
        node* newNode = new node(val);
        
        if (head == NULL) 
        {
            head = tail = newNode;
        } 
        else 
        {
            newNode->next = head;
            head = newNode;
        }
    }

    void insert_Tail(int val) 
    {
        node* newNode = new node(val);
        if (head == NULL) 
        {
            head = tail = newNode;
        } 
        else 
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void print_Head_Tail() 
    {
        cout <<head->val<<" "<< tail->val << endl;
    }
    node* head;
    node* tail;
};

int main() 
{
    int Q;
    cin >> Q;

    LinkedList list;

    for (int i = 0; i < Q; i++) 
    {
        int X, V;
        cin >> X >> V;
        
        if (X == 0) 
        {
            list.insert_Head(V);
        } 
        else if (X == 1) 
        {
            list.insert_Tail(V);
        }
        list.print_Head_Tail();
    }

    return 0;
}
