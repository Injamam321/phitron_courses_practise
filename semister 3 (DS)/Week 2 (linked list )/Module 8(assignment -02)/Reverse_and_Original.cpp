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
}


void insert(int val) 
    {
        node* newNode = new node(val);
        if (head == NULL) 
        {
            head = newNode;
        } 
        else 
        {
            node* tmp = head;
            while (tmp->next != NULL) 
            {
                tmp = tmp->next;
            }
            tmp->next = newNode;
        }
    }

void print_Reverse()
{
    // First, find the length of the linked list
    int length = 0;
    node* tmp = head;
    while (tmp != NULL) 
    {
        length++;
        tmp = tmp->next;
    }

    // Create an array to store the elements in reverse order
    int* val = new int[length];
    tmp = head;

    // Store the elements in reverse order in the array
    for (int i = length - 1; i >= 0; i--)
    {
        val[i] = tmp->val;
        tmp = tmp->next;
    }

    // Print the elements in reverse order from the array
    for (int i = 0; i < length; i++)
    {
        cout << val[i] << " ";
    }

    // Clean up the memory used for the array
    delete[] val;

    cout << endl;
}

void print_same() 
    {
        node* tmp = head;

        while (tmp != NULL) 
        {
            cout << tmp->val << " "; // Corrected: temp->data to temp->val
            tmp = tmp->next;
        }
        cout << endl;
    }
    node* head;
};

int main() 
{
    LinkedList List;

    // Read the input values until -1 is encountered
    int val;
    while (cin >> val && val != -1) {
        List.insert(val);
    }

    // Print the linked list in reverse order
    List.print_Reverse();

    // Print the original linked list
    List.print_same();

    return 0;
}
