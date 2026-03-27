#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector<int> v[N];
bool vis[N];
stack<int> st;

void dfs(int src)
{
    vis[src] = true;

    for (int child : v[src])
    {
        if (vis[child] == false)
        {
            dfs(child);
        }
    }

    st.push(src);
}

int main()
{
    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
    }

    memset(vis, false, sizeof(vis));

    for (int i = 0; i < n; i++)
    {
        if (vis[i] == false)
        {
            dfs(i);
        }
    }

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// unordered_map<int, vector<int>> v;
// unordered_map<int, bool> vis;
// stack<int> st;

// void dfs(int src)
// {
//     vis[src] = true;

//     for (int child : v[src])
//     {
//         if (vis[child] == false)
//         {
//             dfs(child);
//         }
//     }

//     st.push(src);
// }

// int main()
// {
//     int n, e;
//     cin >> n >> e;

//     while (e--)
//     {
//         int a, b;
//         cin >> a >> b;

//         v[a].push_back(b);

//         vis[a] = false;
//         vis[b] = false;
//     }

//     for (int i = 0; i < n; i++)
//     {
//         if (vis[i] == false)
//         {
//             dfs(i);
//         }
//     }

//     while (!st.empty())
//     {
//         cout << st.top() << " ";
//         st.pop();
//     }

//     return 0;
// }
