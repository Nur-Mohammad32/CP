/*
Question: You will be given an undirected graph which will be
connected as input.
Then you will be given a level L.
You need to print the node values at level L in descending order.
The source will be 0 always.
*/

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5;
vector<int> v[N];
bool vis[N];
int level[N];

void bfs(int src)
{
    queue<int> q;
    vis[src] = true;
    level[src] = 0;
    q.push(src);

    while (!q.empty())
    {
        int par = q.front();
        q.pop();

        for (int child : v[par])
        {
            if (!vis[child])
            {
                q.push(child);
                vis[child] = true;
                level[child] = level[par] + 1;
            }
        }
    }
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
        v[b].push_back(a);
    }

    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));

    bfs(0);

    int l;
    cin >> l;

    vector<int> v1;

    for (int i = 0; i < n; i++)
    {
        if (level[i] == l)
        {
            v1.push_back(i);
        }
    }

    sort(v1.begin(), v1.end(), greater<int>());

    if (v1.empty())
    {
        cout << -1 << endl;
    }
    else
    {
        for (auto x : v1)
        {
            cout << x << " ";
        }
    }
    cout << endl;

    return 0;
}
