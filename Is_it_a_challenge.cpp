#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;

    if (N > 0)
    {
        for (int i = 1; i <= N; i++)
        {
            cout << i << " ";
        }
    }
    if (N <= 0)
    {
        for (int i = N; i <= 0;i++)
        {
            cout << i << " ";
        }
    }

    return 0;
}
