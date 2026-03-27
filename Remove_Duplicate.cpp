#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node* next;

    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};

void insert_at_tail(Node*& head, Node*& tail, int value)
{
    Node* newnode = new Node(value);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

void duplicate(Node* head)
{
    Node* curr = head;

    while (curr != NULL)
    {
        Node* prev = curr;
        Node* temp = curr->next;

        while (temp != NULL)
        {
            if (temp->value == curr->value)
            {
                prev->next = temp->next;
                delete temp;
                temp = prev->next;
            }
            else
            {
                prev = temp;
                temp = temp->next;
            }
        }
        curr = curr->next;
    }
}

void print_linked_list(Node* head)
{
    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    int value;
    while (true)
    {
        cin >> value;
        if (value == -1)
        {
            break;
        }
        insert_at_tail(head, tail, value);
    }

    duplicate(head);
    print_linked_list(head);

    return 0;
}
