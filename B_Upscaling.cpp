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
        for (int i = 0; i < n; i++)
        {
            for (int k = 0; k < 2; k++)
            {
                for (int j = 0; j < n; j++)
                {
                    char ch = ((i + j) % 2 == 0) ? '#' : '.';
                    cout << string(2, ch);
                }
                cout << endl;
            }
        }
    }
    return 0;
}
