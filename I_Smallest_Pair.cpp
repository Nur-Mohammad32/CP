#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int res = INT_MAX;
        int N;
        cin >> N;
        int A[N];
        for (int i = 1; i <= N; i++)
        {
            cin >> A[i];
        }

        int i = 1;
        while (i < N)
        {
            int j = i + 1;
            while (j <= N)
            {
                int sum = A[i] + A[j] + j - i;
                if (sum < res)
                {
                    res = sum;
                }
                j++;
            }
            i++;
        }
        cout << res << endl;
    }

    return 0;
}
