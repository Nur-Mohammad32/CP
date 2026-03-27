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
        for (char c : s)
        {
            if (c == '1')
                count++;
        }

        int sum = 0;
        for (char c : s)
        {
            if (c == '0')
                sum += count + 1;

            else
                sum += count - 1;
        }
        cout << sum << endl;
    }

    return 0;
}
