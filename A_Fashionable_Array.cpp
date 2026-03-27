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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());

        if (n == 1)
        {
            cout << 0 << endl;
            continue;
        }
        if ((v[0] + v[n - 1]) % 2 == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            int count1 = 0;
            for (int i = 0; i < n; i++)
            {
                if ((v[i] % 2) == v[0] % 2)
                {
                    count1++;
                }
                else
                {
                    break;
                }
            }

            int count2 = 0;
            for (int i = n - 1; i >= 0; i--)
            {
                if (v[i] % 2 == v[n - 1] % 2)
                {
                    count2++;
                }
                else
                {
                    break;
                }
            }
            cout << min(count1, count2) << endl;
        }
    }

    return 0;
}

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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());

        if (n == 1)
        {
            cout << 0 << endl;
            continue;
        }
        if ((v[0] + v[n - 1]) % 2 == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            int count1 = 1;
            for (int i = 1; i < n; i++)
            {
                if ((v[i] % 2) == v[0] % 2)
                {
                    count1++;
                }
                else
                {
                    break;
                }
            }

            int count2 = 1;
            for (int i = n - 2; i >= 0; i--)
            {
                if (v[i] % 2 == v[n - 1] % 2)
                {
                    count2++;
                }
                else
                {
                    break;
                }
            }
            cout << min(count1, count2) << endl;
        }
    }

    return 0;
}

