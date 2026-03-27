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

        int wi = -1;
        int bi = -1;

        for (int i = 1; i <= n; i++)
        {
            int a, b;
            cin >> a >> b;

            if (a <= 10 && b > bi)
            {
                bi = b;
                wi = i;
            }
        }

        cout << wi << endl;
    }

    return 0;
}
