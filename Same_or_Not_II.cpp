#include <bits/stdc++.h>
using namespace std;

class Stack
{
public:
    vector<int> st;

    void push(int x)
    {
        st.push_back(x);
    }

    void pop()
    {
        if (!st.empty())
        {
            st.pop_back();
        }
    }

    int top()
    {
        if (!st.empty())
        {
            return st.back();
        }
        return -1;
    }

    bool empty()
    {
        return st.empty();
    }
};

class Queue
{
public:
    vector<int> q;

    void push(int x)
    {
        q.push_back(x);
    }

    void pop()
    {
        if (!q.empty())
        {
            q.erase(q.begin());
        }
    }

    int front()
    {
        if (!q.empty())
        {
            return q.front();
        }
        return -1;
    }

    bool empty()
    {
        return q.empty();
    }
};

bool Nur_Md()
{
    int n, m;
    cin >> n >> m;

    if (n != m)
    {
        return false;
    }

    Stack stck;
    Queue qu;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        stck.push(x);
    }

    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        qu.push(x);
    }

    while (!stck.empty() && !qu.empty())
    {
        if (stck.top() != qu.front())
        {
            return false;
        }
        stck.pop();
        qu.pop();
    }

    return true;
}

int main()
{
    bool flag = Nur_Md();
    if (flag)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
