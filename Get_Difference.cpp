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
    tail = newnode;
}

int diff(Node *head)
{
    if (head == NULL)
        return 0;

    int mn = head->value;
    int mx = head->value;

    Node *temp = head;
    while (temp != NULL)
    {
        mn = min(mn, temp->value);
        mx = max(mx, temp->value);
        temp = temp->next;
    }

    return mx - mn;
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
            break;

        insert_at_tail(head, tail, value);
    }

    int result = diff(head);
    cout << result << endl;

    return 0;
}
