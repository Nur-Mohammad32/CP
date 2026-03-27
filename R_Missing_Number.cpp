#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<int> v(n + 1);

    for (int i = 0; i <= n; i++)
        cin >> v[i];

    sort(v.begin(), v.end());
    int p = -1;
    for (int i = 1; i <= n; i++)
        if (v[i] != i)
            p = i;

    cout << p << endl;

    return 0;
}
