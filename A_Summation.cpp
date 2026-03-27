#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    if(sum<0)
    {
        sum = sum * (-1);
    }
    cout << sum;

    return 0;
}
