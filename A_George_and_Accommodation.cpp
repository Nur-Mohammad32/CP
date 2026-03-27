#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<pair<int, int>> p ;

    int a, b;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        p.push_back({a, b});
    }

    int count = 0;
    for (int i = 0; i < p.size();i++)
    {
        int x = p[i].first;
        int y = p[i].second;

        if(y-x>=2)
            count++;
    }
    cout << count;

    return 0;
}
