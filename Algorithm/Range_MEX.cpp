#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;
    vector<int> A(n);
    for (int i = 0; i < n; i++)
        cin >> A[i];

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        l--;
        r--; // convert to 0-based indexing

        unordered_set<int> present;
        for (int i = l; i <= r; i++)
        {
            present.insert(A[i]);
        }

        int mex = 0;
        while (present.count(mex))
            mex++; // find smallest missing number

        cout << mex << "\n";
    }

    return 0;
}
