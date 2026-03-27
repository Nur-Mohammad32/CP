#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    vector<vector<int>> gph(n + 1);
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        gph[u].push_back(v);
        gph[v].push_back(u);
    }
    vector<bool> vstd(n + 1, false);
    int b = 0, oddBC = 0;
    for (int i = 1; i <= n; i++)
    {
        if (vstd[i])
            continue;
        vector<int> c;
        queue<int> q;
        vstd[i] = true;
        q.push(i);
        while (!q.empty())
        {
            int current = q.front();
            q.pop();
            c.push_back(current);
            for (auto &neigh : gph[current])
            {
                if (!vstd[neigh])
                {
                    vstd[neigh] = true;
                    q.push(neigh);
                }
            }
        }
        bool isBip = true;
        vector<int> clr(n + 1, -1);
        for (auto node : c)
        {
            if (clr[node] == -1)
            {
                clr[node] = 0;
                queue<int> q2;
                q2.push(node);
                while (!q2.empty() && isBip)
                {
                    int curr = q2.front();
                    q2.pop();
                    for (auto &neigh : gph[curr])
                    {
                        if (clr[neigh] == -1)
                        {
                            clr[neigh] = 1 - clr[curr];
                            q2.push(neigh);
                        }
                        else if (clr[neigh] == clr[curr])
                        {
                            isBip = false;
                            break;
                        }
                    }
                }
            }
            if (!isBip)
                break;
        }
        if (isBip)
            b++;
        else if ((c.size() % 2) & 1)
            oddBC++;
    }
    b += (oddBC % 2);
    cout << b << endl;
}