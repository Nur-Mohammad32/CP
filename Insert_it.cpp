#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    int m;
    cin >> m;
    vector<int> B(m);
    for (int i = 0; i < m; i++)
    {
        cin >> B[i];
    }

    vector<int> v = A;
    int k;
    cin >> k;

    v.insert(v.begin() + k, B.begin(), B.end());

    for (int x : v)
    {
        cout << x << " ";
    }

    return 0;
}
