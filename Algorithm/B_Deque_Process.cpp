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
            cin >> v[i];

        string s;
        int left = 0, right = n - 1;

        for (int i = 1; i <= n; i++)
        {
            bool flag;
            if (i % 2 == 1)
                flag = (v[left] < v[right]);

            else
                flag = (v[left] > v[right]);

            if (flag)
            {
                s.push_back('L');
                left++;
            }
            else
            {
                s.push_back('R');
                right--;
            }
        }

        cout << s << endl;
    }

    return 0;
}
