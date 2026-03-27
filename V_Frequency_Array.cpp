#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, M;
    cin >> N >> M;
    int A[N];

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    int freq[M+1] = {0};

    for (int i = 0; i < N; i++)
    {
        int val = A[i];
        freq[val]++;
    }

    for (int i = 1; i <= M; i++)
    {
        cout << freq[i] << endl;
    }

    return 0;
}
