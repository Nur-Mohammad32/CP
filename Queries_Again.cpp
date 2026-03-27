#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *prev;
    Node *next;

    Node(int value)
    {
        this->value = value;
        this->prev = NULL;
        this->next = NULL;
    }
};

class Doubly
{
public:
    Node *head;
    Node *tail;
    int size;

    Doubly()
    {
        this->head = NULL;
        this->tail = NULL;
        this->size = 0;
    }

    void insert(int idx, int val)
    {
        if (idx < 0 || idx > size)
        {
            cout << "Invalid" << endl;
            return;
        }

        Node *newnode = new Node(val);

        if (idx == 0)
        {
            newnode->next = head;
            if (head != NULL)
                head->prev = newnode;
            head = newnode;
            if (tail == NULL)
                tail = newnode;
        }
        else if (idx == size)
        {
            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;
        }
        else
        {
            Node *temp = head;
            for (int i = 0; i < idx; i++)
            {
                temp = temp->next;
            }
            Node *prevNode = temp->prev;
            prevNode->next = newnode;
            newnode->prev = prevNode;
            newnode->next = temp;
            temp->prev = newnode;
        }

        size++;
        print_ltr();
        print_rtl();
    }

    void print_ltr()
    {
        cout << "L -> ";
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->value << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void print_rtl()
    {
        cout << "R -> ";
        Node *temp = tail;
        while (temp != NULL)
        {
            cout << temp->value << " ";
            temp = temp->prev;
        }
        cout << endl;
    }
};

int main()
{
    int q;
    cin >> q;

    Doubly d;

    while (q--)
    {
        int x, v;
        cin >> x >> v;
        d.insert(x, v);
    }

    return 0;
}