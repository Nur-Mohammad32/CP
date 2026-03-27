/*
Question: You will be given an undirected graph as input.
Then you will be given a node N.
 You need to print the number of nodes that are
  directly connected to the node N.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;

    vector<int> v[n];

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    int x;
    cin >> x;

    // for (auto p : v[x])
    // {
    //     cout << p << " ";
    // }
    cout << v[x].size();
    return 0;
}
