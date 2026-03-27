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

        int count = 0;
        int empty = 0;
        for (char c : s)
        {
            if (c == '.')
            {
                empty++;
                count++;
                if (count == 3)
                    break;
            }
            else
                count = 0;
        }
        if (count == 3)
            cout << 2 << endl;
        else
            cout << empty << endl;
    }

    return 0;
}
