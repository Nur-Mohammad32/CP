#include <bits/stdc++.h>
using namespace std;

const int N = 205;
vector<int> v[N];
int col[N];

bool bfs(int src, int n)
{
    queue<int> q;
    fill(col, col + N, -1);

    bool flag = true;

    q.push(src);
    col[src] = 0;

    while (!q.empty())
    {
        int par = q.front();
        q.pop();

        for (int child : v[par])
        {
            if (col[child] == -1)
            {
                col[child] = 1 - col[par];
                q.push(child);
            }
            else if (col[child] == col[par])
            {
                flag = false;
            }
        }
    }
    return flag;
}

int main()
{
    int n, e;
    while (true)
    {
        cin >> n;
        if (n == 0)
        {
            break;
        }

        cin >> e;

        for (int i = 0; i < N; i++)
        {
            v[i].clear();
        }

        for (int i = 0; i < e; i++)
        {
            int a, b;
            cin >> a >> b;
            v[a].push_back(b);
            v[b].push_back(a);
        }

        bool flag = bfs(0, n);
        if (flag == true)
        {
            cout << "BICOLORABLE." << endl;
        }
        else
        {
            cout << "NOT BICOLORABLE." << endl;
        }
    }
    return 0;
}
