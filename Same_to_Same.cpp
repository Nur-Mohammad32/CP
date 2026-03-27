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

bool equal(Node *head1, Node *head2)
{
    while (head1 != NULL && head2 != NULL)
    {
        if (head1->value != head2->value)
        {
            return false;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    return head1 == NULL && head2 == NULL;
}

int main()
{
    Node *head1 = NULL, *tail1 = NULL;
    Node *head2 = NULL, *tail2 = NULL;

    int value;
    while (true)
    {
        cin >> value;
        if (value == -1)
        {
            break;
        }
        insert_at_tail(head1, tail1, value);
    }

    while (true)
    {
        cin >> value;
        if (value == -1)
        {
            break;
        }
        insert_at_tail(head2, tail2, value);
    }

    bool ans = equal(head1, head2);
    if (ans)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO";
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

// bool equal(Node *head1, Node *head2)
// {
//     while (head1 != NULL && head2 != NULL)
//     {
//         if (head1->value != head2->value)
//         {
//             return false;
//         }
//         head1 = head1->next;
//         head2 = head2->next;
//     }

//     return head1 == NULL && head2 == NULL;
// }

// int main()
// {
//     Node *head1 = NULL;
//     Node *tail1 = NULL;
//     Node *head2 = NULL;
//     Node *tail2 = NULL;

//     int value;

//     while (cin >> value && value != -1)
//     {
//         insert_at_tail(head1, tail1, value);
//     }

//     while (cin >> value && value != -1)
//     {
//         insert_at_tail(head2, tail2, value);
//     }

//     if (equal(head1, head2))
//         cout << "YES\n";
//     else
//         cout << "NO\n";

//     return 0;
// }
