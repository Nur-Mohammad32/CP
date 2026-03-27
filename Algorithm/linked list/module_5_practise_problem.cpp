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

int main()
{
    Node *head = new Node(5);
    Node *a = new Node(7);
    Node *b = new Node(1);
    Node *c = new Node(14);
    Node *d = new Node(3);
    Node *e = new Node(11);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    // c
    cout << "head = " << head->value << endl;

    // d
    // 1020

    // e
    cout << head->next->next->value << endl;

    int sum = 0;
    Node *temp = head;
    while (temp->next != c)
    {
        sum += temp->value;
        temp = temp->next;
    }
    sum -= temp->value;

    cout << sum << endl;

    return 0;
}
