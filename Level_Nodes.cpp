#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *left;
    Node *right;

    Node(int value)
    {
        this->value = value;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *input()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
    {
        root = NULL;
    }
    else
    {
        root = new Node(val);
    }
    queue<Node *> q;

    if (root != NULL)
    {
        q.push(root);
    }

    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *myleft, *myright;

        if (l == -1)
        {
            myleft = NULL;
        }
        else
        {
            myleft = new Node(l);
        }

        if (r == -1)
        {
            myright = NULL;
        }
        else
        {
            myright = new Node(r);
        }

        p->left = myleft;
        p->right = myright;

        if (p->left != NULL)
        {
            q.push(p->left);
        }

        if (p->right != NULL)
        {
            q.push(p->right);
        }
    }

    return root;
}

void nur(Node *root, int level)
{
    if (root == NULL)
    {
        return;
    }

    queue<Node *> q;
    q.push(root);
    int curr = 0;
    bool found = false;

    while (!q.empty())
    {
        int count = q.size();
        vector<int> v;

        while (count > 0)
        {
            Node *f = q.front();
            q.pop();
            v.push_back(f->value);

            if (f->left)
            {
                q.push(f->left);
            }
            if (f->right)
            {
                q.push(f->right);
            }

            count--;
        }

        if (curr == level)
        {
            found = true;
            for (int val : v)
            {
                cout << val << " ";
            }
            cout << endl;
            break;
        }
        curr++;
    }

    if (!found)
    {
        cout << "Invalid" << endl;
    }
}

int main()
{
    Node *root = input();
    int level;
    cin >> level;

    nur(root, level);

    return 0;
}
