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

int index(Node *head, int x)
{
    int idx = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->value == x)
        {
            return idx;
        }

        temp = temp->next;
        idx++;
    }
    return -1;
}

int main()
{

    int T;
    cin >> T;

    while (T--)
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

        int x;
        cin >> x;

        cout << index(head, x) << '\n';
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

// int index(Node *head, int x)
// {
//     int idx = 0;
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         if (temp->value == x)
//         {
//             return idx;
//         }
//         temp = temp->next;
//         idx++;
//     }
//     return -1;
// }

// int main()
// {
//     int T;
//     cin >> T;

//     while (T--)
//     {
//         Node *head = NULL;
//         Node *tail = NULL;

//         int value;
//         while (true)
//         {
//             cin >> value;
//             if (value == -1)
//             {
//                 break;
//             }
//             insert_at_tail(head, tail, value);
//         }

//         int x;
//         cin >> x;

//         int result = index(head, x);
//         cout << result << endl;
//     }

//     return 0;
// }
