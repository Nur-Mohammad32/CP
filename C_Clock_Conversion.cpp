#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int h, m;
        char colon;
        cin >> h >> colon >> m;

        string period;
        int hour12;

        if (h < 12)
            period = " AM";
        else
            period = " PM";

        if (h == 0)
            hour12 = 12;
        else if (h <= 12)
            hour12 = h;
        else
            hour12 = h - 12;

        if (hour12 < 10)
            cout << "0";
        cout << hour12;
        cout << colon;
        if (m < 10)
            cout << "0";
        cout << m;
        cout << period << endl;
    }

    return 0;
}
