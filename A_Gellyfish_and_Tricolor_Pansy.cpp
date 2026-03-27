#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        int min_G = min(a, c);
        int min_F = min(b, d);

        if (min_F < min_G)
        {
            cout << "Gellyfish" << endl;
        }
        else if (min_G < min_F)
        {
            cout << "Flower" << endl;
        }
        else
        {
            cout << "Gellyfish" << endl;
        }
    }

    return 0;
}
