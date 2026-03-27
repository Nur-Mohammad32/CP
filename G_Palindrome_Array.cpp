#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    int i = 0;
    int j = N - 1;

    bool flag = true;
    while (i <= j)
    {
        if (arr[i] != arr[j])
        {
            flag = false;
            break;
        }
        i++;
        j--;
    }

    if (flag)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
