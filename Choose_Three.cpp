#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        long long S;
        cin >> N >> S;
        int A[1001];
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }

        bool flag = false;

        for (int i = 0; i < N; i++)
        {
            for (int j = i + 1; j < N; j++)
            {
                for (int k = j + 1; k < N; k++)
                {
                    if (A[i] + A[j] + A[k] == S)
                    {
                        flag = true;
                        break;
                    }
                }
            }
        }
        if(flag==true)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
        cout << endl;
    }

    return 0;
}
