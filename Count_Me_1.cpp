#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int A[N];

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    int count2 = 0, count3 = 0;
    for (int i = 0; i < N; i++)
    {
        if (A[i] % 2 == 0 && A[i] % 3 == 0)
        {
            count2++;
        }
        else if (A[i] % 2 == 0)
        {
            count2++;
        }
        else if (A[i] % 3 == 0)
        {
            count3++;
        }
    }
    cout << count2 << " " << count3;

    return 0;
}
