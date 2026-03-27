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
        vector<int> v;
        int pos = 1;

        while (n > 0)
        {
            int d = n % 10;
            if (d != 0)
                v.push_back(d * pos);
            n /= 10;
            pos *= 10;
        }

        cout << v.size() << endl;
        for (int x : v)
            cout << x << " ";
        cout << endl;
    }
}
