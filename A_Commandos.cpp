#include <bits/stdc++.h>
using namespace std;

const int N = 105;
vector<int> v[N];
int dis_s[N], dis_d[N];
bool vis[N];

void bfs(int src, int dist[], int n)
{
    queue<int> q;

    fill(vis, vis + N, false);
    fill(dist, dist + N, -1);  

    q.push(src);
    dist[src] = 0;
    vis[src] = true;

    while (!q.empty())
    {
        int par = q.front();
        q.pop();

        for (int child : v[par])
        {
            if (!vis[child])
            {
                dist[child] = dist[par] + 1;
                vis[child] = true;
                q.push(child);
            }
        }
    }
}

int main()
{
    int T;
    cin >> T;
    for (int i = 1; i <= T; i++)
    {
        int n, r;
        cin >> n >> r;

        for (int j = 0; j < N; j++)
        {
            v[j].clear();
        }

        for (int j = 0; j < r; j++)
        {
            int x, y;
            cin >> x >> y;
            v[x].push_back(y);
            v[y].push_back(x);
        }

        int s, d;
        cin >> s >> d;

        bfs(s, dis_s, n);
        bfs(d, dis_d, n);

        int t = 0;
        for (int j = 0; j < n; j++)
        {
            t = max(t, dis_s[j] + dis_d[j]);
        }

        cout << "Case " << i << ": " << t << endl;
    }
    return 0;
}
















// #include <bits/stdc++.h>
// using namespace std;

// const int N = 105;
// vector<int> v[N];
// int dis_s[N], dis_d[N];
// bool vis[N];

// void bfs(int src, int dist[], int n)
// {
//     queue<int> q;

//     fill(vis, vis + n, false);
//     fill(dist, dist + n, -1);

//     q.push(src);
//     dist[src] = 0;
//     vis[src] = true;

//     while (!q.empty())
//     {
//         int par = q.front();
//         q.pop();

//         for (int child : v[par])
//         {
//             if (!vis[child])
//             {
//                 dist[child] = dist[par] + 1;
//                 vis[child] = true;
//                 q.push(child);
//             }
//         }
//     }
// }

// int main()
// {
//     int T;
//     cin >> T;
//     for (int i = 1; i <= T; i++)
//     {
//         int n, r;
//         cin >> n >> r;

//         for (int i = 0; i < n; i++)
//         {
//             v[i].clear();
//         }

//         for (int i = 0; i < r; i++)
//         {
//             int x, y;
//             cin >> x >> y;
//             v[x].push_back(y);
//             v[y].push_back(x);
//         }

//         int s, d;
//         cin >> s >> d;

//         bfs(s, dis_s, n);
//         bfs(d, dis_d, n);

//         int t = 0;
//         for (int i = 0; i < n; i++)
//         {
//             t = max(t, dis_s[i] + dis_d[i]);
//         }

//         cout << "Case " << t << ": " << t << endl;
//     }
//     return 0;
// }
