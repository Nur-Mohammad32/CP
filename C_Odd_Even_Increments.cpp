#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int op = a[0] % 2;
        bool flag1 = true;
        bool flag2 = true;
        for (int i = 0; i < n; i += 2)
        {
            if (a[i] % 2 != op)
            {
                flag1 = false;
                break;
            }
        }

        int ep = a[1] % 2;
        for (int i = 1; i < n; i += 2)
        {
            if (a[i] % 2 != ep)
            {
                flag2 = false;
                break;
            }
        }

        if (flag1 && flag2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
