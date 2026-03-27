#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;

    long long arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    long long t;
    cin >> t;

    long long idx = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == t)
        {
            idx = i;
            break;
        }
    }
    cout << idx << endl;
    return 0;
}
