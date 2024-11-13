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

void print_Mid_number() 
    {
        vector<int> val;

        // Traverse the linked list and store the values in a vector
        node* tmp = head;
    
        while (tmp != NULL)
        {
            val.push_back(tmp->val);
            
            tmp = tmp->next;
        }

        // Sort the vector in descending order
        sort(val.rbegin(), val.rend());

        // Find the middle element(s) of the sorted vector
        int mid_Index = val.size() / 2;

        if (val.size() % 2 == 0)
        {
            // Even number of elements, print both middle elements
            cout << val[mid_Index - 1] << " " << val[mid_Index] <<endl;
        }
        else
        {
            // Odd number of elements, print the middle element
            cout << val[mid_Index] << endl;
        }
    }

public:
    
    node* head;
};

int main()
{
    LinkedList linkedList;

    // Read the input values until -1 is encountered
    int val;
    
    while (cin >> val && val != -1)
    {
        linkedList.insert(val);
    }

    // Print the middle element(s)
    linkedList.print_Mid_number();

    return 0;
}
