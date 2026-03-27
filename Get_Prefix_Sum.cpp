#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    vector<long long int> A(N);
    for (long long int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    vector<long long int> pref_sum(N);
    pref_sum[0] = A[0];

    for (long long int i = 1; i < N; i++)
    {
        pref_sum[i] = pref_sum[i - 1] + A[i];
    }

    long long int i = 0;
    long long int j = pref_sum.size() - 1;
    while (i < j)
    {
        swap(pref_sum[i], pref_sum[j]);
        i++;
        j--;
    }

    for (long long int x : pref_sum)
    {
        cout << x << " ";
    }

    return 0;
}
