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
    tail = newnode;
}

void delete_at_position(Node *&head, Node *&tail, int idx)
{
    if (head == NULL)
    {
        return;
    }

    if (idx == 0)
    {
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;
        if (head == NULL)
        {
            tail = NULL;
        }
        return;
    }

    Node *temp = head;
    for (int i = 0; i < idx - 1; i++)
    {
        if (temp->next == NULL)
        {
            return;
        }
        temp = temp->next;
    }

    if (temp->next == NULL)
    {
        return;
    }

    Node *deleteNode = temp->next;
    temp->next = deleteNode->next;

    if (deleteNode == tail)
    {
        tail = temp;
    }
    delete deleteNode;
}

void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    int q;
    cin >> q;

    Node *head = NULL;
    Node *tail = NULL;

    while (q--)
    {
        int x, v;
        cin >> x >> v;

        if (x == 0)
        {
            insert_at_head(head, v);
            if (tail == NULL)
            {
                tail = head;
            }
        }
        else if (x == 1)
        {
            insert_at_tail(head, tail, v);
        }
        else if (x == 2)
        {
            delete_at_position(head, tail, v);
        }

        print_linked_list(head);
    }

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     int value;
//     Node *next;

//     Node(int value)
//     {
//         this->value = value;
//         this->next = NULL;
//     }
// };

// void insert_at_head(Node *&head, int value)
// {
//     Node *newnode = new Node(value);
//     newnode->next = head;
//     head = newnode;
// }

// void insert_at_tail(Node *&head, Node *&tail, int value)
// {
//     Node *newnode = new Node(value);
//     if (head == NULL)
//     {
//         head = newnode;
//         tail = newnode;
//         return;
//     }
//     tail->next = newnode;
//     tail = newnode;
// }

// void delete_at_position(Node *&head, Node *&tail, int idx)
// {
//     if (head == NULL)
//         return;

//     if (idx == 0)
//     {
//         Node *deleteNode = head;
//         head = head->next;
//         delete deleteNode;
//         if (head == NULL)
//             tail = NULL;
//         return;
//     }

//     Node *temp = head;
//     for (int i = 0; i < idx - 1; i++)
//     {
//         if (temp->next == NULL)
//             return;
//         temp = temp->next;
//     }

//     if (temp->next == NULL)
//         return;

//     Node *deleteNode = temp->next;
//     temp->next = deleteNode->next;

//     if (deleteNode == tail)
//         tail = temp;

//     delete deleteNode;
// }

// void print_linked_list(Node *head)
// {
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->value << " ";
//         temp = temp->next;
//     }
//     cout << "\n";
// }

// int main()
// {
//     int q;
//     cin >> q;

//     Node *head = NULL;
//     Node *tail = NULL;

//     while (q--)
//     {
//         int x, v;
//         cin >> x >> v;

//         if (x == 0)
//         {
//             insert_at_head(head, v);
//             if (tail == NULL)
//                 tail = head;
//         }
//         else if (x == 1)
//         {
//             insert_at_tail(head, tail, v);
//         }
//         else if (x == 2)
//         {
//             delete_at_position(head, tail, v);
//         }

//         print_linked_list(head);
//     }

//     return 0;
// }
