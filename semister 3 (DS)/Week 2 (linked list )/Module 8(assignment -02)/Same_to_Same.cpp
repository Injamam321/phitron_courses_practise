#include<bits/stdc++.h>
using namespace std;

class ListNode {
public:
    int val;
    ListNode* next;
    ListNode(int val) : val(val), next(NULL) {}
};

bool areListsEqual(ListNode* head1, ListNode* head2) {
    while (head1 != NULL && head2 != NULL) {
        if (head1->val != head2->val)
            return false;
        
        head1 = head1->next;
        head2 = head2->next;
    }
    
    // If both lists are traversed completely and still not different
    return (head1 == NULL && head2 == NULL);
}

int main() {
    ListNode* head1 = NULL;
    ListNode* tail1 = NULL;
    int val;

    // Create the first singly linked list
    while (true) {
        cin >> val;
        if (val == -1)
            break;

        ListNode* newNode = new ListNode(val);

        if (head1 == NULL) {
            head1 = newNode;
            tail1 = head1;
        } else {
            tail1->next = newNode;
            tail1 = newNode;
        }
    }

    ListNode* head2 = NULL;
    ListNode* tail2 = NULL;

    // Create the second singly linked list
    while (true) {
        cin >> val;
        if (val == -1)
            break;

        ListNode* newNode = new ListNode(val);

        if (head2 == NULL) {
            head2 = newNode;
            tail2 = head2;
        } else {
            tail2->next = newNode;
            tail2 = newNode;
        }
    }

    // Check if both lists are equal
    if (areListsEqual(head1, head2))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    // Clean up the memory
    while (head1 != NULL) {
        ListNode* tmp = head1;
        head1 = head1->next;
        delete tmp;
    }

    while (head2 != NULL) {
        ListNode* tmp = head2;
        head2 = head2->next;
        delete tmp;
    }

    return 0;
}
