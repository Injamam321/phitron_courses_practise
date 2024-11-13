#include<bits/stdc++.h>
using namespace std;

class Node 
{
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        next = nullptr;
    }
};

class LinkedList 
{
private:
    Node* head;

public:
    LinkedList() 
    {
        head = nullptr;
    }

    void insert(int data) 
    {
        Node* newNode = new Node(data);
        if (head == nullptr) 
        {
            head = newNode;
        } else 
        {
            Node* current = head;
            while (current->next != nullptr) 
            {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    int getSize() {
        int count = 0;
        Node* current = head;
        while (current != nullptr) {
            count++;
            current = current->next;
        }
        return count;
    }
};

int main() {
    LinkedList linkedList;

    // Insert elements into the linked list
    linkedList.insert(2);
    linkedList.insert(1);
    linkedList.insert(5);
    linkedList.insert(3);
    linkedList.insert(4);
    linkedList.insert(8);
    linkedList.insert(9);

    // Get the size of the linked list
    int size = linkedList.getSize();

    // Print the size of the linked list
    std::cout << "Size of the linked list: " << size << std::endl;

    return 0;
}
