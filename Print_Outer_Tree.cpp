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
        // 1.extract
        Node *p = q.front();
        q.pop();

        // 2.node niye kaj
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

        // 3.children push
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

void left_subtree(Node *root)
{
    if (root == NULL)
        return;

    if (root->left != NULL)
    {
        left_subtree(root->left);
    }
    else if (root->right != NULL)
    {
        left_subtree(root->right);
    }
    cout << root->value << " ";
}

void right_subtree(Node *root)
{
    if (root == NULL)
        return;

    cout << root->value << " ";

    if (root->right != NULL)
    {
        right_subtree(root->right);
    }
    else if (root->left != NULL)
    {
        right_subtree(root->left);
    }
}

int main()
{
    Node *root = input();

    left_subtree(root->left);

    cout << root->value << " ";

    right_subtree(root->right);

    return 0;
}
