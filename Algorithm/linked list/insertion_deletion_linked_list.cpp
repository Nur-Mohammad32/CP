#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;

    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};

// insertion operation

void insert_at_head(Node *&head, int value)
{
    Node *newnode = new Node(value);
    newnode->next = head;
    head = newnode;
}

void insert_at_tail(Node *&head, Node *&tail, int value)
{
    Node *newnode = new Node(value);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = tail->next;
}

void insert_at_position(Node *head, int idx, int value)
{
    Node *newnode = new Node(value);
    Node *temp = head;
    for (int i = 1; i < idx; i++)
    {
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}

// deletion operation

void delete_head(Node *&head)
{
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
}

void delete_at_position(Node *head, int idx)
{
    Node *temp = head;
    for (int i = 1; i < idx; i++)
    {
        temp = temp->next;
    }
    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
}

void delete_tail(Node *head,Node*tail,int idx)
{
    Node *temp = head;
    for (int i = 1; i < idx; i++)
    {
        temp = temp->next;
    }
    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
    tail = temp;
}
// print operation

void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
}

void print_reverse_linked_list(Node *temp)
{
    if (temp == NULL)
    {
        return;
    }

    print_reverse_linked_list(temp->next);
    cout << temp->value << " ";
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

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

    // insertion
    insert_at_head(head, 200);
    insert_at_tail(head, tail, 300);
    insert_at_position(head, 3, 100);

    // print before deletion
    print_linked_list(head);
    cout << endl;
    // print_reverse_linked_list(head);

    // deletion
    delete_head(head);
    delete_at_position(head, 3);
    delete_tail(head,tail,4);

    // print after deletion
    print_linked_list(head);
    cout << endl;
    // print_reverse_linked_list(head);

    return 0;
}
