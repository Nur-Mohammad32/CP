#include <bits/stdc++.h>
using namespace std;

void concat(vector<int> &A, vector<int> &B)
{
    vector<int> v = B;

    v.insert(v.end(), A.begin(), A.end());
    for (int x : v)
    {
        cout << x << " ";
    }
}
int main()
{
    int N;
    cin >> N;
    vector<int> A(N);
    vector<int> B(N);

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    for (int i = 0; i < N; i++)
    {
        cin >> B[i];
    }

    concat(A, B);

    return 0;
}
