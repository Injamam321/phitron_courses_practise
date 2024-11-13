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

node* my_singly_Linked_List() 
{
    node* head = NULL;
    node* tail = NULL;
    int val;

    while (true) 
    {
        cin >> val;
        if (val == -1)
            break;

        node* newNode = new node(val);

        if (head == NULL) 
        {
            head = newNode;
            tail = head;
        } 
        else 
        {

            tail->next = newNode;
            tail = newNode;
        }
    }

    return head;
}

void find_Max_Min(node* head, int & maxVal, int & minVal) {
    if (head == NULL)
        return;

    maxVal = head->val;
    minVal = head->val;

    node* runningval = head->next;

    while (runningval != NULL) 
    {
        if (runningval->val > maxVal)

            maxVal = runningval->val;

        if (runningval->val < minVal)

            minVal = runningval->val;

        runningval = runningval->next;
    }
}

int main() 
{
    node* head = my_singly_Linked_List();
    
    int maxVal=INT_MIN;
    int minVal=INT_MAX;

    find_Max_Min(head, maxVal, minVal);

    cout << maxVal << " " << minVal << endl;

    while (head != NULL) 
    {
        node* tmp = head;
        head = head->next;
        delete tmp;
    }

    return 0;
}
