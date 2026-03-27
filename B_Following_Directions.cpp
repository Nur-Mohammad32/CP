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
        string s;
        cin >> s;

        int x_axis = 0;
        int y_axis = 0;

        bool flag = false;
        for (char c : s)
        {
            if (c == 'U')
                y_axis++;
            else if (c == 'D')
                y_axis--;
            else if (c == 'R')
                x_axis++;
            else
                x_axis--;

            if (x_axis == 1 && y_axis == 1)
            {
                flag = true;
                break;
            }
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
