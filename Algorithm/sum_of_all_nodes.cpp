#include <bits/stdc++.h>
using namespace std;

const int N = 1e5;
vector<int> v[N];
bool vis[N];

int bfs(int src)
{
    queue<int> q;
    vis[src] = true;
    q.push(src);

    int sum = 0;

    while (!q.empty())
    {
        int par = q.front();
        q.pop();

        //cout << par << " ";
        sum += par;

        for (int child : v[par])
        {
            if (!vis[child])
            {
                q.push(child);
                vis[child] = true;
            }
        }
    }

    return sum;
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
    int total = bfs(0);

    cout << "\nSum of node values: " << total << endl;

    return 0;
}
