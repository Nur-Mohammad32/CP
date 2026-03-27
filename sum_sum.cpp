#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int A[N];

    int sn = 0;
    int sp = 0;

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    for (int i = 0; i < N; i++)
    {
        if (A[i] > 0)
        {
            sp += A[i];
        }
        else
        {
            sn += A[i];
        }
    }

    cout << sp << " " << sn;

    return 0;
}
