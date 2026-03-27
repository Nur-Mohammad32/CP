#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int N;
        cin >> N;

        int A[N];
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }

        int B[N];
        for (int i = 0; i < N; i++)
        {
            B[i] = A[i];
        }

        int i = 0;
        int j = N - 1;
        while (i < j)
        {
            int temp = B[i];
            B[i] = B[j];
            B[j] = temp;
            i++;
            j--;
        }

        for (int i = 0; i < N - 1; i++)
        {
            for (int j = i + 1; j < N; j++)
            {
                if (B[j] < B[i])
                {
                    int temp = B[i];
                    B[i] = B[j];
                    B[j] = temp;
                }
            }
        }

        int C[N];
        for (int i = 0; i < N; i++)
        {
            C[i] = abs(A[i] - B[i]);
        }

        for (int i = 0; i < N; i++)
        {
            cout << C[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
