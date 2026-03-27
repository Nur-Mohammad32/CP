#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n1, n2;
    cin >> n1 >> n2;

    int A[n1][n2];
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            cin >> A[i][j];
        }
    }

    int n3, n4;
    cin >> n3 >> n4;

    int B[n3][n4];
    for (int i = 0; i < n3; i++)
    {
        for (int j = 0; j < n4; j++)
        {
            cin >> B[i][j];
        }
    }

    if (n2 != n3)
    {
        cout << "Matrix multiplication not possible" << endl;
        return 0;
    }

    int C[n1][n4];
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n4; j++)
        {
            C[i][j] = 0;
            for (int k = 0; k < n2; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n4; j++)
        {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
