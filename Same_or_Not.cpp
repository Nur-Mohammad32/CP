#include <bits/stdc++.h>
using namespace std;

bool Nur_Md()
{
    int n, m;
    cin >> n >> m;

    if (n != m)
    {
        return false;
    }

    stack<int> st;
    queue<int> q;

    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    for (int i = 0; i < m; ++i)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    while (!st.empty() && !q.empty())
    {
        if (st.top() != q.front())
        {
            return false;
        }
        st.pop();
        q.pop();
    }

    return true;
}

int main()
{
    bool flag = Nur_Md();

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
