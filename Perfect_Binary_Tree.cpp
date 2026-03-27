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

int count(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int c1 = count(root->left);
    int c2 = count(root->right);
    return 1 + c1 + c2;
}

int depth(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return 1 + max(depth(root->left), depth(root->right));
}

bool nur(Node *root)
{
    if (root == NULL)
    {
        return true;
    }

    int total_node = count(root);
    int height = depth(root);

    int ans = pow(2, height) - 1;

    return (total_node == ans);
}

int main()
{
    Node *root = input();
    bool flag = nur(root);
    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
